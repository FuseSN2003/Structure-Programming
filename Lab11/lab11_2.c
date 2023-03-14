#include <stdio.h>
#include <math.h>

typedef struct {
    float x,y,z;
}Vector3D;

float FindLength(Vector3D p) {
    return sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));
}

int main() {
    int n;
    scanf("%d", &n);
    Vector3D p[n];

    for(int i = 0; i < n; i++) {
        scanf("%f %f %f", &p[i].x, &p[i].y, &p[i].z);
    }

    for(int i = 0; i < n; i++) {
        printf("%.2f\n", FindLength(p[i]));
    }
    
    return 0;
}