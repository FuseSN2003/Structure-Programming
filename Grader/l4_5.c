#include <stdio.h>

int main() {
    char secret_code[]="00000000";
    int number;

    scanf("%d", &number);
    
    // ตำแหน่งที่ 1
    if(number%2==0){
        secret_code[0]='1';
    }
    else {
        secret_code[0]='0';
    }

    // ตำแหน่งที่ 2
    if(number%2==0){
        secret_code[1]='0';
    }
    else {
        secret_code[1]='1';
    }
    
    // ตำแหน่งที่ 3
    if(number%2==0){
        if(number%4==0){
            secret_code[2]='0';
        }
        else{
            secret_code[2]='1';
        }
    }
    else {
        if(number%3==0){
            secret_code[2]='0';
        }
        else{
            secret_code[2]='1';
        }
    }

    // ตำแหน่งที่ 4
    if(number%2==0){
        if(number%6==0){
            secret_code[3]='0';
        }
        else{
            secret_code[3]='1';
        }
    }
    else {
        if(number%5==0){
            secret_code[3]='0';
        }
        else{
            secret_code[3]='1';
        }
    }
    
    // ตำแหน่งที่ 5
    if(number>=10){
        secret_code[4]='0';
    }
    else if(number<10){
        secret_code[4]='1';
    }

    // ตำแหน่งที่ 6
    if(number>=100){
        secret_code[5]='0';
    }
    else if(number<100){
        secret_code[5]='1';
    }

    // ตำแหน่งที่ 7
    if(number>=1000){
        secret_code[6]='0';
    }
    else if(number<1000){
        secret_code[6]='1';
    }

    // ตำแหน่งที่ 8
    if(number>=1000){
        secret_code[7]='0';
    }
    else if(number<1000){
        secret_code[7]='1';
    }

    printf("%s", secret_code);

    return 0;
}