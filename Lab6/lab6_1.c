#include <stdio.h>
#include <math.h>

int main(){
    int n=0, sum=0, min, max;
    float avg=0, sd=0;
    scanf("%d", &n);
    int intArr[n];

    for (int i=0; i<n; i++){
        scanf("%d", &intArr[i]);
        sum+=intArr[i];
    }
    min=max=intArr[0];
    for (int i=0; i<n; i++){
        if(min>intArr[i]){
            min=intArr[i];
        }
        if(max<intArr[i]){
                max=intArr[i];
        }
    }

    avg = sum/n;
    for (int i=0; i<n; i++) {
        sd+=pow(intArr[i] - avg, 2);
    }
    sd = sqrt(sd/n);
    
    printf("%f\n", avg);
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%d\n", sd);

    return 0;
}