#include <stdio.h>

int main()
{
    char operator;
    int num1,num2;
    float result;

    printf("Please enter number1: ");
    scanf("%d", &num1);
    printf("Please enter number2: ");
    scanf("%d", &num2);
    printf("Please enter operator: ");
    scanf(" %c", &operator);

    if(operator == '+') {
        result = num1+num2;
    }
    else if(operator == '-') {
        result = num1-num2;
    }
    else if(operator == '*') {
        result = num1*num2;
    }
    else if(operator == '/'){
        result = num1/num2;
    }
    
    printf("Result is = %.2f", result);
    
    return 0;
}