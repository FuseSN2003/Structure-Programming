#include <stdio.h>

int main ()
{

    float h,r,cylinder;

    printf("Enter height and radius of the cylinder in cm: ");
    scanf("%f %f", &h,&r);

    cylinder = 3.1416*h*r*r;

    printf("Volume of the cylinder is %.1f", cylinder);
    
    return 0;
}