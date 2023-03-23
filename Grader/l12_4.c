#include <stdio.h>
#include <math.h>

int func(x,n) {
    if(n == 0) {
        return pow(x, n);
    }
    else {
        return pow(x,n)+func(x, n-1);
    }
}

int main() {
    int x,n;
    scanf("%d %d", &x, &n);
    
    printf("%d", func(x,n));
    return 0;
}