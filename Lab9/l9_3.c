#include <stdio.h>
#include <ctype.h>

int str_length(char str[]){
    int ct;
    for (ct = 0; str[ct] != '\0'; ++ct);
    return ct-1;
}

void reverse(char *str, int len) {
    char *start = str;
    char *end = str + len - 1;

    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int countdigit(char str[]){
    int ct = 0;
    for (ct = 0; isdigit(str[ct]) != 0; ++ct);
    return ct;
}

void main() {
    char word[100];
    
    fgets(word, 100, stdin);

    reverse(word, str_length(word));

    printf("%s", word);
    printf("%d", countdigit(word));
}