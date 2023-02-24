#include <stdio.h>

void swap(int *ptr1, int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main() {
    int n,i,a[101];
    scanf("%d", &n);
    if(n<=20){
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        printf("a) ");
        for(i=0; i<4; i++){
            printf("%d ",a[i]);
        }
        printf("\n");

        printf("b) ");
        for(i=0; i<n; i++){
            if(a[i]>a[2]){
                printf("%d ", a[i]);
            }
        }
        printf("\n");

        printf("c) ");
        for(i=0; i<n; i++){
            if(a[i]>a[2]){
                printf("%d ", i);
            }
        }
        printf("\n");

        a[n]=a[2]+a[3];
        printf("d) ");
        for(i=0; i<n+1; i++){
            printf("%d ", a[i]);
        }
        printf("\n");

        a[3]=a[2]-a[4];
        if(a[3]<0){
            a[3]=-a[3];
        }
        printf("e) ");
        for(i=0; i<n+1; i++){
            printf("%d ", a[i]);
        }
        printf("\n");

        printf("f) ");
        if(a[1]>a[5]){
            printf("2\n");
        }
        else if(a[5]>a[1]){
            printf("6\n");
        }

        swap(a+1, a+n);
        printf("g) ");
        for(i=0; i<n+1; i++){
            printf("%d ", a[i]);
        }
        printf("\n");

        int new[101],ct=0;
        for(i=0; i<n+1; i++){
            if(a[i]%2==0){
                new[i-i+ct]=a[i];
                ct++;
            }
        }
        printf("h) ");
        for(i=0; i<ct; i++){
            printf("%d ", new[i]);
        }
    }

    return 0;
}