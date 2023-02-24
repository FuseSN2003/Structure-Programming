#include <stdio.h>

double oil(double initial, int n){
    if(n == 0){
        return initial;
    }
    else{
        return (0.9)*oil(initial, n-1);
    }
}

void main() {
    printf("%lf", oil(25000000, 23));
}