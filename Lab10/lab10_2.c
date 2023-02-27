#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    scanf("%[^\n]s", word);
    for(int i = 0; word[i] != '\0'; i++) {
        word[i] = toupper(word[i]);
    }
    
    printf("%s", word);
    return 0;
}