#include <stdio.h>

int main(){
    int h,m,i,j;

    while(1){
        scanf("%d %d", &h, &m);
        if(h==0 && m==0){
            break;
        }
        if(h>=1 && h<=30 && m>=1 && m<=30){
            for(i=0; i<h; i++){
                for(j=0; j<m; j++){
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
    
    return 0;
}