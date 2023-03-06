#include <stdio.h>
#include <ctype.h>

typedef struct {
    char face_values, suit;
    int numface;
}Deck;

int main(){
    int n, i, j, sum = 0;
    Deck temp;
    scanf("%d", &n);
    fflush(stdin);

    if(n >= 1 && n <= 52) {
        Deck d[n];
        for(i = 0; i < n; i++){
            scanf(" %c %c", &d[i].face_values, &d[i].suit);
            fflush(stdin);
        }
        
        for(i = 0; i < n; i++) {
            switch (toupper(d[i].face_values)) {
                case 'A':
                    d[i].numface = 1;
                    sum++;
                    break;
                case 'J':
                    d[i].numface = 10;
                    sum+=10;
                    break;
                case 'Q':
                    d[i].numface = 11;
                    sum+=11;
                    break;
                case 'K':
                    d[i].numface = 12;
                    sum+=12;
                    break;
                default:
                    d[i].numface = d[i].face_values - '0';
                    sum+=d[i].numface;
            }
        }
        
        for(i = 0; i < n; i++) {
            for(j = i; j < n; j++) {
                if(d[i].numface > d[j].numface) {
                    temp = d[i];
                    d[i] = d[j];
                    d[j] = temp;
                }
            }
        }

        for(i = 0; i < n; i++) {
            printf("%c-%c", d[i].face_values,d[i].suit);
            if(i < n-1) {
                printf(", ");
            }
        }
        
        printf("\n%d", sum);
    }
    
    return 0;
}