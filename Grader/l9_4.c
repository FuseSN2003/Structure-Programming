#include <stdio.h>

typedef struct
{
    char face_values ;
    int numface;
    char suit;
}deck;

int main(){
    int n, i, j,sum = 0;
    char temp;

    scanf("%d",&n);

    if(n >= 1 && n <= 52) {

        deck d[n];
        for(i=0;i<n;i++){
            scanf(" %c %c",&d[i].face_values,&d[i].suit);
        }
        
        for(i = 0; i < n; i++) {
            switch (d[i].face_values) {
                case 'A':
                    d[i].numface = 1;
                    sum++;
                    break;
                case '2':
                    d[i].numface = 2;
                    sum+=2;
                    break;
                case '3':
                    d[i].numface = 3;
                    sum+=3;
                    break;
                case '4':
                    d[i].numface = 4;
                    sum+=4;
                    break;
                case '5':
                    d[i].numface = 5;
                    sum+=5;
                    break;
                case '6':
                    d[i].numface = 6;
                    sum+=6;
                    break;
                case '7':
                    d[i].numface = 7;
                    sum+=7;
                    break;
                case '8':
                    d[i].numface = 8;
                    sum+=8;
                    break;
                case '9':
                    d[i].numface = 9;
                    sum+=9;
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
            }
        }
        
        for(i = 0; i < n; i++) {
            for(j = i+1; j < n; j++) {
                if(d[i].numface > d[j].numface) {
                    temp = d[i].face_values;
                    d[i].face_values = d[j].face_values;
                    d[j].face_values = temp;
                    temp = d[i].suit;
                    d[i].suit = d[j].suit;
                    d[j].suit = temp;
                }
            }
        }

        for(i = 0; i < n; i++) {
            printf("%c-%c",d[i].face_values,d[i].suit);
            if(i < n-1) {
                printf(", ");
            }
        }

        printf("\n%d", sum);
    }

    return 0;
}