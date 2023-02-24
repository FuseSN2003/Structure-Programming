#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char* num_to_word[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    scanf("%d", &num);

    if(num>=100 && num<=999){
        int ones = num % 10;
        int tens = (num / 10) % 10;
        int hundreds = (num / 100) % 10;
        printf("%s %s %s", num_to_word[hundreds], num_to_word[tens], num_to_word[ones]);
    }
    return 0;
}
