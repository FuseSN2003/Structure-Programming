#include <stdio.h>
#define RUNNER 10

int main()
{
    int runner[RUNNER][2];
    int i, j;

    for (i = 0; i < RUNNER; i++)
    {
        scanf("%d %d", &runner[i][0], &runner[i][1]);
    }

    for (i=0; i<RUNNER; i++) {
        for (j=0; j<RUNNER-i-1; j++) {
            if(runner[j][1] > runner[j+1][1]) {
                int tempID = runner[j][0];
                int tempTime = runner[j][1];
                runner[j][0] = runner[j+1][0];
                runner[j][1] = runner[j+1][1];
                runner[j+1][0] = tempID;
                runner[j+1][1] = tempTime;
            }
        }
    }

    printf("\nTop 3: \n");
    for (i = 0; i < 3; i++)
    {
        printf("%d. ID: %d, Time: %d seconds\n", i + 1, runner[i][0], runner[i][1]);
    }

    return 0;
}