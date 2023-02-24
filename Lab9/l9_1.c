#include <stdio.h>

void main(){
    int i = 3, j = 5, *p = &i, *q = &j, *r;
    double x = 2.50;
    printf("%d\n", *p);
    printf("%d\n", *q);
    r = p;
    printf("%d\n", *r);
    r = &j;
    printf("%d\n", *r);
    r = &x;
    printf("%d\n", *r); // illegal
    printf("%d\n", **&p);
    printf("%d\n", *p-1);
    printf("%d\n", *p+*q);
    printf("%d\n", *p+*q);
    printf("%d\n", 7**q+7);
}