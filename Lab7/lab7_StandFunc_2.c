#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomThousand(){
    return rand() % 1000;
}

void sortedArray(int *array, int n){
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int countFreq(int array[], int n, int target){
    int i = 0, cout = 0;
    for (i = 0; i < n; i++){
        if (target == array[i])
            cout += 1;
    }
    return cout;
}

int main(){
    // Required
    srand(time(NULL));

    int n = 0, i = 0;
    printf("How many random number you want: ");
    scanf("%d", &n);

    int randomList[n];
    for (i = 0; i < n; i++){
        randomList[i] = randomThousand();
    }

    sortedArray(randomList, n);
    for (i = 0; i < n; i++){
        printf("%d, ", randomList[i]);
    }

    printf("\n");
    for (i = 0; i < n; i++){
        printf("%d. %d: %d\n", i + 1, randomList[i], countFreq(randomList, n, randomList[i]));
    }

    return 0;
}