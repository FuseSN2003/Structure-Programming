#include <stdio.h>

int main()
{
    int price,amount;
    float total;
    printf("Please enter unit price: ");
    scanf("%d", &price);
    printf("Please enter number: ");
    scanf("%d", &amount);
    
    total = (price*amount)+(price*amount*0.07);

    printf("Total amount %.2f", total);
    
    return 0;
}