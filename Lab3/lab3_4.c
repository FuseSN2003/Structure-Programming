#include <stdio.h>
#include <math.h>

int main() {
    float x,sinx,cosx;
    
    printf("Please enter angle in degree: ");
    scanf("%f", &x);

    sinx = sin(x);
    cosx = cos(x);

    printf("sine of %.1f degree is %.4f\n", x, sinx);
    printf("cos of %.1f degree is %.4f\n", x, cosx);
    
    return 0;
}