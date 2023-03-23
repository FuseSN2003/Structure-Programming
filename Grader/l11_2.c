#include <stdio.h>
#include <math.h>

float dist(float point1[], float point2[]){
    return sqrt(pow(point1[0]-point2[0],2) + 
    pow(point1[1]-point2[1],2) +
    pow(point1[2]-point2[2],2));
}


int main() {
    int n,i,j;
    scanf("%d",&n);

    float points[n][3];

    for(i = 0; i < n; i++)
    {
        scanf("%f %f %f",&points[i][0],&points[i][1],&points[i][2]);
    }

    float datadist[n][n];
    float distances[n*(n-1)/2];
    int k=0;

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            float d = dist(points[i],points[j]);
            datadist[i][j] = d;
            datadist[j][i] = d;
            distances[k] = d;
            k++;
        }
    }  

    for (i = 0; i < k-1; i++) {
        for (j = i+1; j < k; j++) {
            if (distances[j] > distances[i]) {
                float temp = distances[i];
                distances[i] = distances[j];
                distances[j] = temp;
            }
        }
    }

    for (i = 0; i < 3 && i < k; i++) {
        printf("%.2f\n", distances[i]);
    }

    return 0;
}