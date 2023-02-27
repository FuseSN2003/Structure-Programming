#include <stdio.h>
#define NMAX 10
void inputArray(int array[ ], int N);
void showArray2D(int matrix[ ][10], int N);
void constructMatrix(int P[ ][10], int N, int A[ ], int B[ ]);

void main()
{
	int a[NMAX], b[NMAX], p[NMAX][NMAX], n;
	printf("Enter N = "); scanf("%d", &n);
	printf("Input array A \n"); inputArray(a, n);
	printf("Input array B \n"); inputArray(b, n);
	constructMatrix(p, n, a, b);
	printf("Matrix P \n");
	showArray2D(p, n);
}

void inputArray(int array[],int N)
{
	for(int i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
}

void constructMatrix(int P[ ][10], int N, int A[ ], int B[ ])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			P[i][j] = A[i] * B[j];
		}
	}
}

void showArray2D(int matrix[ ][10], int N)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}