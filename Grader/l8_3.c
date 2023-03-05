#include <stdio.h>

int len(char str[]) {
    int ct;
    for(ct=0; str[ct]; ct++);
    return ct;
}

void reversestr(char *str, int len) {
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

int countdigit(char str[], int len) {
    int ct=0;
    char numlist[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < 10; j++) {
            if(str[i] == numlist[j]) {
                ct++;
            }
        }
    }
    return ct;
}

void main() {
    char word[100];

    scanf("%[^\n]s", word);

    reversestr(word, len(word));

    printf("%s\n", word);
    printf("%d\n", countdigit(word, len(word)));
}