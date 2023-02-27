#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int z1, int x2, int y2, int z2){
    float d = sqrt(pow(fabs(z2-z1), 2) + pow(fabs(y2-y1), 2) + pow(fabs(x2-x1), 2));
    return d;
}

void main() {
    int x1,y1,z1,x2,y2,z2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
    printf("%.2f", distance(x1,y1,z1,x2,y2,z2));
}