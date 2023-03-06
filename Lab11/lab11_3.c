#include <stdio.h>

typedef struct {
    int m1000, m500, m100, m50, m20, m10, m1;
}Money;

Money calc(int m) {
    Money x;
    x.m1000 = 0, x.m500 = 0, x.m100 = 0, x.m50 = 0, x.m20 = 0, x.m10 = 0, x.m1 = 0;
    if(m >= 1000) {
        x.m1000 = m / 1000;
        m%=1000;
    }
    if(m >= 500) {
        x.m500 = m / 500;
        m%=500;
    }
    if(m >= 100) {
        x.m100 = m / 100;
        m%=100;
    }
    if(m >= 50) {
        x.m50 = m / 50;
        m%=50;
    }
    if(m >= 100) {
        x.m10 = m / 10;
        m%=10;
    }
    x.m1 = m;

    return x;
}

int main() {
    int n;
    scanf("%d", &n);
    
    Money x = calc(n);
    printf("%d %d %d %d %d %d %d", x.m1000, x.m500, x.m100, x.m50, x.m20, x.m10, x.m1);

    return 0;
}