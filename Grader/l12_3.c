#include <stdio.h>
int main(){
    int n,countm=0,temp,ans=1;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            countm++;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if(n==2){
        for(i=0;i<n;i++){
            ans*=a[i];
        }
    }
    else if(countm%2==0){
        for(i=0;i<n;i++){
            if(a[i]!=0){
                ans*=a[i];
            }
        }
    }

    else{
        for(i=0;i<countm-1;i++){
            ans*=a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]>0){
                ans*=a[i];
            }
        }
    }
    printf("%d",ans);
}