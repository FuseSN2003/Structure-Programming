#include <stdio.h>
#define MAX 10

int FindMinimum(int *arr) {
    int i, min = arr[0];
    for(i = 0; i < MAX; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int FindMaximum(int *arr) {
    int i, max = arr[0];
    for(i = 0; i < MAX; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float FindAvg(int *arr) {
    int i,sum=0;
    for(i = 0; i < MAX; i++) {
        sum+=arr[i];
    }
    return sum / (float)MAX;
}

void sorting(int *arr) {
    int i, j;
    for(i = 0; i < MAX-1; i++) {
        for(j = i+1; j < MAX; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int data[10], i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
    }

    printf("Minimum: %d\n", FindMinimum(data));
    printf("Maximum: %d\n", FindMaximum(data));
    sorting(data);
    printf("after sorting: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\nAverage: %f", FindAvg(data));
    
}