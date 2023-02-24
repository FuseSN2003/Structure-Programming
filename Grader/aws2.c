#include <stdio.h>

int main() {
    int midterm,test,final,score;

    scanf("%d/%d/%d", &midterm,&test,&final);
    score=midterm+test+final;
    if(score>=80) {
        printf("A");
    }
    else if(score>=70 && score<80){
        printf("B %d", 80-score);
    }
    else if(score>=60 && score<70){
        printf("C %d", 80-score);
    }
    else if(score>=50 && score<60){
        printf("D %d", 80-score);
    }
    else if(score<50){
        printf("F %d", 80-score);
    }
    
    return 0;
}