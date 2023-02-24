#include <stdio.h>
#include <math.h>

int main() {
    int n,i,sum_x=0,avg_x;
    float sd=0;

    scanf("%d", &n);
    int x[n];

    for(i=0; i<n; i++) {
        scanf("%d", &x[i]);
        sum_x+=x[i];
    }
    avg_x=sum_x/n;

    for(i=0; i<n; i++) {
        sd+=pow(x[i]-avg_x, 2)/(n-1);
    }
    sd=sqrt(sd);

    printf("%.2f", sd);
    
    return 0;
}