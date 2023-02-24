#include <stdio.h>

int main() {
    int r,c,i,j;
    scanf("%d %d", &r, &c);
    int arr[r+1][c+1];

    for(i=0; i<r; i++){
        int sum_r=0;
        for(j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
            sum_r+=arr[i][j];
            arr[i][j+1]=sum_r;
        }
    }

    for(j=0; j<c+1; j++){
        int sum_c=0;
        for(i=0; i<r; i++){
            sum_c+=arr[i][j];
        }
        arr[r][j]=sum_c;
    }

    for(i=0; i<r+1; i++){
        for(j=0; j<c+1; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}