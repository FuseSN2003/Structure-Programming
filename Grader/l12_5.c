#include <stdio.h>
#include <math.h>

int main() {
    int n, a0, a1;
    scanf("%d %d %d", &n, &a0, &a1);
    int a[n];
    a[0] = a0, a[1]=a1;
    for(int k = 2; k <= n+1; k++) {
        a[k] = pow(k, 2)*a[k-1]-a[k-2]+pow(3, k);
    }

    for(int i = 0; i < n+1; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}