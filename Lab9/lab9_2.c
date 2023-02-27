#include <stdio.h>

int main() {
    int x = 1, y = 2;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ip, *iq;
    ip = &x;
    printf("%d\n", *ip);
    y = *ip;
    printf("%d\n", y);
    *ip = 0;
    printf("%d\n", x);
    ip = &a[0];
    printf("%d\n", *ip);
    ip = ip + 3;
    printf("%d\n", *ip);
    *ip = 0;
    printf("%d\n", a[3]);
    *ip = *ip + 10;
    printf("%d\n", a[3]);
    iq = ip;
    printf("%d\n", *iq);
    *iq = 0;
    printf("%d\n", *ip);

    return 0;
}