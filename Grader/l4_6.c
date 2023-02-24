#include <stdio.h>

int main() {
    int n,i,j,num;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        for(j=0; j<n; j++) {
            num = (i+j+1)%n;
            if(num == 0){
                num=n;
            }
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}