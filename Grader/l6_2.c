#include <stdio.h>

int main() {
    int i=0,num[100],ct=0,max=0;

    while(1) {
        scanf("%d", &num[i]);

        if(num[i]>=max){
            max=num[i];
        }

        if(num[i] == max) {
            ct++;
        }

        if(num[i]==0) {
            break;
        }
        i++;
    }
    printf("%d %d", max, ct);
    
    return 0;
}