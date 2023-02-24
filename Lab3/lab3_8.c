#include <stdio.h>
#include <math.h>
// l3_9 in grader

int main()
{
    float x,y,amount;
    scanf("%f %f",&x,&y);
    
    if(1<=x<=1000 && 1<=x<=1000) {
        amount = y/x;
    }
    printf("%.0f", ceil(amount));

    return 0;
}