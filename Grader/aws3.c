#include <stdio.h>

int main() {
    int hour, min;
    scanf("%d:%d", &hour, &min);
    if (hour >= 7 && hour < 9) {
        if (hour == 7 && min < 10) {
            printf("N\n");
        } else if (hour == 9 && min >= 30) {
            printf("N\n");
        } else {
            printf("Y\n");
        }
    } else {
        printf("N\n");
    }
    return 0;
}