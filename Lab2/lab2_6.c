#include <stdio.h>

int main ()
{

    int x1,x2,x3,x4;
    float med;

    printf("Please input data (x1-x4): ");
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    med = (x2+x3)/2;

    printf("Median is %.1f\n", med);
    
    return 0;
}