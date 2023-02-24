#include <stdio.h>
// l4_3 in grader

int main()
{
    int x,i=1;
    float v, t, result=0, distance=0;

    scanf("%d", &x);

    for(i; i<=x; ++i) {
        scanf("%f %f", &v,&t);
        result=v*(t/60);
        distance+=result;
    }

    printf("%.1f", distance);
    
    return 0;
}
