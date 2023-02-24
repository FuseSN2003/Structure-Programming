#include <stdio.h>

int main()
{
    int mid,final,hw,x;
    
    printf("Mid-term: ");
    scanf("%d", &mid);
    printf("Final: ");
    scanf("%d", &final);
    printf("Homework: ");
    scanf("%d", &hw);

    x = (mid*0.4)+(final*0.5)+(hw*0.1);

    if(x>=90 && x<=100){
        printf("grade A");
    }
    else if(x>=85 && x<90){
        printf("grade B+");
    }
    else if(x>=80 && x<85){
        printf("grade B");
    }
    else if(x>=70 && x<80){
        printf("grade C+");
    }
    else if(x>=60 && x<70){
        printf("grade C");
    }
    else if(x>=55 && x<60){
        printf("grade D+");
    }
    else if(x>=50 && x<55){
        printf("grade D");
    }
    else if(x<50){
        printf("grade F");
    }


    return 0;
}