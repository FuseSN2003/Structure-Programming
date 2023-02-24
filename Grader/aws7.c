#include <stdio.h>

int main() {
    int num;

    while(1){
        scanf("%d", &num);
        if(num==-1){
            break;
        }
        if(num>=0 && num<=100){
            printf("%d\n", 100-num);
        }
    }
    
    return 0;
}