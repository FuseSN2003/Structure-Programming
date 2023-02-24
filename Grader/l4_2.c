#include <stdio.h>
int main()
{

    int n, i, j;

    scanf("%d", &n);
    if(n>=4 && n<=1000) {
        for (i = 1; i <= n; i++){

        // spaces
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        // star
        printf("*");

        // spaces
        for (j = 1; j < (i - 1) * 2;
             j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }

    // for loop is used to identify
    // the number of rows and
    // lower triangle
    for (i = n - 1; i >= 1; i--)
    {

        // spaces
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        // star
        printf("*");
        for (j = 1; j < (i - 1) * 2;
             j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }
    }
    return 0;
}