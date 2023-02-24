#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, point1, point2;
    double min_distance, distance;
    scanf("%d", &n);
    double points[n][2];
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &points[i][0], &points[i][1]);
    }
    min_distance = INFINITY;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            distance = sqrt(pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2));
            if (distance < min_distance) {
                min_distance = distance;
                point1 = i;
                point2 = j;
            }
        }
    }
    printf("%d %d %.2lf\n", point1+1, point2+1, min_distance);
    return 0;
}