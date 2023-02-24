#include <stdio.h>

int main(){
    int n,i;
    
    while(1){
        scanf("%d", &n);
        if(n==-1){
            break;
        }
        if(n>=1 && n<=50){
            for(i=0; i<n; i++){
                printf("%d ", i+1);
            }
            printf("\n");
        }
    }
    
    return 0;
}