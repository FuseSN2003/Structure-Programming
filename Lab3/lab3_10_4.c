#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int binaryNum[32];
    int i=0;
    while (num>0) {
        binaryNum[i]=num%2;
        num/=2;
        i++;
    }
    for (int j=i-1; j>=0; j--){
        printf("%d", binaryNum[j]);
    }
    
    return 0;
}