#include <stdio.h>

int main() {
    int year;
    float grade;
    char assist;

    scanf("%d %f %c", &year, &grade, &assist);
    
    if(grade>=3.00){
            printf("approved");
    }
    else if(year==1){
        printf("not approved\nyear < 2");
    }
    else if(year>=2){
        if(grade>=2.50){
            if(assist=='Y'){
                printf("approved");
            }
            else{
                printf("not approved\nno help");
            }
        }
        else{
            printf("not approved\ngrade < 2.50");
        }
    }
    
    return 0;
}