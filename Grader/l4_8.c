#include <stdio.h>

int main() {
    char isbn[10];
    int sum,i;
    
    scanf("%s", &isbn);

    for (i=0; i<10; i++) {
        int digit = isbn[i]-'0';
        sum+=(digit*(10-i));
    }
    
    if(sum=sum%11 == 0) {
        printf("valid");
    }
    else{
        printf("invalid");
    }
    
    return 0;
}