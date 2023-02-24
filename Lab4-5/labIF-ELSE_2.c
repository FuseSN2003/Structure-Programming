#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,m,y;
    
    printf("Please enter A : ");
    scanf("%d", &a);
    printf("Please enter B : ");
    scanf("%d", &b);
    printf("Please enter C : ");
    scanf("%d", &c);
    printf("Please enter m : ");
    scanf("%d", &m);

    if(m>7){
        y=a*pow(m,2)+b*m+c;
    }
    else if(m=7){
        y=a*pow(m,2)-b*m-c;
    }
    else{
        y=a*pow(m,2)+b*m;
    }
    
    printf("The result of Y = %d",y);
    
    return 0;
}