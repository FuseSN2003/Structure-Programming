#include <stdio.h>

float deposit_interest(float deposit, int n) {
    if(n == 0){
        return deposit;
    }
    else {
        return 1.05*deposit_interest(deposit, n-1);
    }
}

void main() {
    printf("%f", deposit_interest(10000, 30));
}