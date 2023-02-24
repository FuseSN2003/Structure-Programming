#include <stdio.h>

int main() {
    int x,n,i,j,temp;
    scanf("%d", &x);
    
    for(i=0; i<x; i++){
        scanf("%d", &n);
        temp=0;
        for(j=2; j<=n/2; j++) {
            if(n%j==0){
                temp++;
                break;
            }
        }
        if (temp==0 && n!=1){
            printf("y\n");
        }
        else {
            printf("n\n");
        }
    }
    return 0;
}