#include <stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[n-i-1]);
    }
    
    return 0;
}