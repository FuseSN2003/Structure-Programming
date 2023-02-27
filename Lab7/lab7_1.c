#include <stdio.h>
#include <math.h>

int f(int x){
    int result;
    if(x < 0) {
        result = pow(x, 2) + (2*x) + 3;
    }
    else if(x == 0) {
        result = 0;
    }
    else {
        result = x - 2;
    }
    return result;
}

void main() {
    int x;
    printf("input (x): ");
    scanf("%d", &x);

    printf("result = %d", f(x));
}