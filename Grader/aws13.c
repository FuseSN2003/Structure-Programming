#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    char answers[k];
    for (int i = 0; i < k; i++) {
        scanf(" %c", &answers[i]);
    }

    int n;
    scanf("%d", &n);

    char std[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf(" %c", &std[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int score = 0;
        for (int j = 0; j < k; j++) {
            if (std[i][j] == answers[j]) {
                score++;
            }
        }
        printf("std %d => %d\n", i+1, score);
    }

    return 0;
}
