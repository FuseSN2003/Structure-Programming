#include <stdio.h>

int main(){
    char id[13];
    int i, sum=0, check_digit, result;

    printf("Please Enter 13 Digit ID card: ");
    scanf("%s", id);

    for (i=0; i<12; i++){
        sum+=(id[i]-'0')*(13-i);
    }

    result = sum%11;
    check_digit = 11-result;

    if(check_digit == (id[12]-'0')) {
        printf("Your ID is Valid");
    }else {
        printf("Your ID is Invalid");
    }

    return 0;
}