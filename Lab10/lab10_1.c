#include <stdio.h>

int len(char str[]) {
    int ct;
    for(ct = 0; str[ct] != '\0'; ct++);
    
    return ct;
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

void main() {
    char word[100];
    scanf("%[^\n]s", word);

    reverse(word, len(word));

    printf("%s", word);
}