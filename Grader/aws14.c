#include <stdio.h>

int main() {

    char answers[20];
    for (int i = 0; i < 20; i++) {
        scanf(" %c", &answers[i]);
    }

    int n;
    scanf("%d", &n);

    char std[n][20];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 20; j++) {
            scanf(" %c", &std[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int score = 0;
        for (int j = 0; j < 20; j++) {
            if (std[i][j] == answers[j]) {
                if(j+1>=1 && j+1<=15){
                    score++;
                }
                else if(j+1>=16 && j+1<=18){
                    score+=2;
                }
                else if(j+1>=19){
                    score+=3;
                }
            }
        }
        printf("std %d => %d\n", i+1, score);
    }

    return 0;
}
