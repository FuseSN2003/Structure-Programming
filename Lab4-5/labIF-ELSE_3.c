#include <stdio.h>

int main()
{
    char name[20], gender;
    int height,weight;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Are you male or female, %s (M,F): ",name);
    scanf(" %c", &gender);
    printf("%s, what is your height in c.m. and weight in k.g: ", name);
    scanf("%d %d", &height,&weight);
    
    if(gender == 'F'){
        height-=110;
        if(weight>height){
            printf("%s, your ideal weight is %d kg, you are %d kg Overweight", name,height,weight-height);
        }
        else if(weight<height){
            printf("%s, your ideal weight is %d kg, you are %d kg Underweight", name,height,height-weight);
        }
    }
    else if(gender == 'M'){
        height-=105;
        if(weight>height){
            printf("%s, your ideal weight is %d kg, you are %d kg Overweight", name,height,weight-height);
        }
        else if(weight<height){
            printf("%s, your ideal weight is %d kg, you are %d kg Underweight", name,height,height-weight);
        }
    }
    
    return 0;
}