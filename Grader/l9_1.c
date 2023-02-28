#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

int Dist(Point p1, Point p2) {
    return sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
}

int quadrant(Point p){
    if(p.x > 0 && p.y > 0) {
        return 1;
    }
    else if(p.x < 0 && p.y > 0) {
        return 2;
    }
    else if(p.x < 0 && p.y < 0) {
        return 3;
    }
    else if(p.x > 0 && p.y < 0) {
        return 4;
    }
}

void main() {
    int n,i;
    scanf("%d", &n);
    Point p[n];

    for(i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    for(i = 0; i < n; i++) {
        printf("%d\n", quadrant(p[i]));
    }

    for(i = 0; i < n; i+=2){
        printf("%d\n", Dist(p[i],p[i+1]));
    }
}