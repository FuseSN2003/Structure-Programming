#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%[^\n]s", word);
    
    for(int i=0; i < strlen(word); i++) {
        switch(word[i]) {
            case '0':
                printf("zero");
                break;
            case '1':
                printf("one");
                break;
            case '2':
                printf("two");
                break;
            case '3':
                printf("three");
                break;
            case '4':
                printf("four");
                break;
            case '5':
                printf("five");
                break;
            case '6':
                printf("six");
                break;
            case '7':
                printf("seven");
                break;
            case '8':
                printf("eight");
                break;
            case '9':
                printf("nine");
                break;
            default:
                printf("%c", word[i]);
        }
    }
    return 0;
}