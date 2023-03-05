#include <stdio.h>
#include <math.h>

typedef struct {
    int x,y;
}Point;

float dist(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2)+pow(p1.y - p2.y, 2));
}

int quadrant(Point p) {
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

int main() {
    int n;
    scanf("%d", &n);
    Point p[n], origin;
    origin.x=0, origin.y=0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", quadrant(p[i]));
    }

    for(int i = 0; i < n; i+=2) {
        if(n == 1) {
            printf("%.2f\n", dist(origin, p[i]));
        }
        else {
            printf("%.2f\n", dist(p[i], p[i+1]));
        }
    }

    return 0;
}