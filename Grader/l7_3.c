#include <stdio.h>

int fibonacci(int n);

int main() {
    int n, i, sum=0;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}