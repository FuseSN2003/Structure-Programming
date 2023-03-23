#include <stdio.h>

int main(){
    int tempx,tempy;
    int x=0,y=0,n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            x=3;
            y=1;
            s+=x*y;
        }
        else{
            tempx=x+y;
            tempy=x-y;
            s+=(x+y)*(x-y);
            x=tempx;
            y=tempy;
        }
    }
    printf("%d",s);
    return 0;
}