#include <stdio.h>
#include <stdbool.h>

int maxprime(int *array, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        bool prime = true;
        int a = array[i];
        for (int j = 2; j < a; j++)
        {
            if (a % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            max = a > max ? a : max;
    }
    if (max==0) {
        max=-1;
    }
    return max;
}

int main()
{
    int i = 1, n;
    int array[100];
    while (i)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        array[i - 1] = n;
        i++;
    }

    printf("%d", maxprime(array, i));
}
