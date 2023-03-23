#include <stdio.h>

int main() {
	int r,c;
	scanf("%d %d",&r,&c);
	int max=0;
	int i,j;
	int a[r][c];
	int b[r-1][c];
	int e[r-1][c];
	int d[r-1][c];
	int final[r-1][c];
	int maxarr;
	int maxarr2;
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r-1;i++) {
		for(j=0;j<c;j++) {
			if((a[i][j] - a[i+1][j]) < 0) {
				d[i][j] = a[i+1][j] + a[i][j];
				b[i][j] = a[i+1][j] - a[i][j];
			}
			else {
				b[i][j] = a[i][j] - a[i+1][j];
				d[i][j] = a[i][j] + a[i+1][j];
			}
		}
	}

	for(i=0;i<r-1;i++) {
		for(j=0;j<c;j++) {
			if(b[i][j] <= 10) {
				e[i][j] = b[i][j];
				final[i][j] = d[i][j];
			}
			else {
				e[i][j] = 0;
				final[i][j] = 0;
			}
		}
	}
	///findmax in e[i][j]
	max = final[0][0];
	for(i=0;i<r-1;i++) {
		for(j=0;j<c;j++) {
			if(final[i][j] > max) {
				max = final[i][j];
				maxarr = i+1;
				maxarr2 = j+1;
			}
		}
	}

	printf("%d %d", maxarr,maxarr2);
}