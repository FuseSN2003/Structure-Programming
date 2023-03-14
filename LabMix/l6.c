#include<math.h>
#include <stdio.h>
#include<windows.h>
#define M_PI 3.14159265358979323846

COORD coord={0,0};
double rad(double z){ 
    double ans;
    ans = z*M_PI/180;
    return(ans);
}
void setColor(int code){
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, code);
}
    
double SINE(double u,double z){
    return sin(u*z);
}
    
void gotoxy(int x,float y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle
    (STD_OUTPUT_HANDLE),coord);
}

int main(){
    for (int i = 0;i<80;i++){
    gotoxy(i,SINE(rad(i),rad(5))*90);
    printf("*");
    }
    scanf("%d");
    return 0;
}