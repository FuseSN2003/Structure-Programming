#include <stdio.h>

int main(){
    int m,n,i,j;
    scanf("%d %d", &n, &m);
    int a[m][n],b[m][n],add_matrix[m][n];

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            add_matrix[i][j]=a[i][j]+b[i][j];
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("%d ", add_matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}