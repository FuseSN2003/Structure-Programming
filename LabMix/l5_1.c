#include <stdio.h>
#include <math.h>

double FindSeries() {
    int n, i;
    double sum=0;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += (pow(-1, i+1))/((2*i)-1);
    }
    return sum;
}

int main() {
    printf("%f", FindSeries());
    return 0;
}