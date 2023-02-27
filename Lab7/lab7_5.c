#include <stdio.h>

int findMin(int arr[], int size) {
    int i, min = arr[0];
    for(i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int size) {
    int i, max = arr[0];
    for(i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int summation(int arr[], int size) {
    int i, sum = 0;
    for(i = 0; i < size; i++) {
        sum+=arr[i];
    }
    return sum;
}

void main() {
    int n,i;
    
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Min: %d\n", findMin(arr, n));
    printf("Max: %d\n", findMax(arr, n));
    printf("Sum: %d\n", summation(arr, n));
}