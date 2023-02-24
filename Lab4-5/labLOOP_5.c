#include <stdio.h>

int main()
{
    int num,result=1;

    printf("Please enter number of factorial: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        result*=i;
    }
    printf("result: %d", result);
    
    return 0;
}