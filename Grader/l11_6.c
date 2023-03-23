#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int sum[] = {0,0,0,0};

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // z1
    for (i = 0; i < r/2; i++) {
        for (j = 0; j < c/2; j++) {
            sum[0] += arr[i][j];
        }
    }

    // z2
    for (i = 0; i < r/2; i++) {
        for (j = c/2; j < c; j++) {
            sum[1] += arr[i][j];
        }
    }

    // z3
    for (i = r/2; i < r; i++) {
        for (j = 0; j < c/2; j++) {
            sum[2] += arr[i][j];
        }
    }

    // z4
    for (i = r/2; i < r; i++) {
        for (j = c/2; j < c; j++) {
            sum[3] += arr[i][j];
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (sum[i] > sum[j]) {
                int temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }
    printf("%d ", sum[0]);
    return 0;
}