#include <stdio.h>
// l3_10 in grader

int main(){
    char abc[3];
    int num[3],cc;

    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    scanf("%s",abc);

    for (int i=0;i<3;i++){
        for (int j=i+1;j<3;j++){
            if(num[i]>num[j]){
                cc=num[i];
                num[i]=num[j];
                num[j]=cc;
            }
        }
    }
    for (int i=0;i<3;i++){
        printf("%d ",num[abc[i]-65]);
    }
    return 0;
}