#include <stdio.h>
// l3_6 in grader

int main() 
{
    
    int a;
    int ct1=0,ct2=0,ct3=0,ct4=0,ct5=0,ct6=0,ct7=0;

    scanf("%d", &a);

    if(0<=a<=1000000){
        if(a>=1000) {
            ct1 = a/1000;
            a%=1000;
        }
        if(a>=500) {
            ct2 = a/500;
            a%=500;
        }
        if(a>=100) {
            ct3 = a/100;
            a%=100;
        }
        if(a>=50) {
            ct4 = a/50;
            a%=50;
        }
        if(a>=20) {
            ct5 = a/20;
            a%=20;
        }
        if(a>=10) {
            ct6 = a/10;
            a%=10;
        }
        if(a>=1) {
            ct7 = a/1;
            a%=1;
        }
    }
    printf("%d %d %d %d %d %d %d",ct1,ct2,ct3,ct4,ct5,ct6,ct7);
    
    return 0;

}