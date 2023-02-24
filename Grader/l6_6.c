#include <stdio.h>
#include <math.h>

int main() {
    int n,m,l,k;
    float c;
    scanf("%d %d", &n,&m);
    scanf("%d %d", &l,&k);
    scanf("%f", &c);
    
    int number[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &number[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=number[i][j];
        }
    }
    
    double result=ceil((sum+(k*l*c))/c);

    printf("%.0lf", result);

    return 0;
}