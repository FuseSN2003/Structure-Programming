#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int matrix[m][n],matrix_T[m][n];
    
    // input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            matrix_T[j][i]=matrix[i][j];
        }
    }

    // output
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", matrix_T[i][j]);
        }
        printf("\n");
    }

    return 0;
}