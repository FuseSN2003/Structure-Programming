#include <stdio.h>

int main ()
{

    int f1,f2,f3;
    float c1,c2,c3;

    printf("Please input temperature1 (F): ");
    scanf("%d", &f1);
    printf("Please input temperature2 (F): ");
    scanf("%d", &f2);
    printf("Please input temperature3 (F): ");
    scanf("%d", &f3);
    
    c1 = 5*(f1-32)/9;
    c2 = 5*(f2-32)/9;
    c3 = 5*(f3-32)/9;

    printf("temperature1: %d is %.2f C\n", f1,c1);
    printf("temperature2: %d is %.2f C\n", f2,c2);
    printf("temperature3: %d is %.2f C\n", f3,c3);
    
    return 0;
}