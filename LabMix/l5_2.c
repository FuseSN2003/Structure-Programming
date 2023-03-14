#include <stdio.h>

long int FindNFact(long int n) {
    if(n==1){
        return n;
    }
    else{
        return n*FindNFact(n-1);
    }
}

int main() {
    long int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    printf("%d", FindNFact(n));
    return 0;
}