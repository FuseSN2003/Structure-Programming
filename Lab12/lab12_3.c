#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main(){
    FILE *fp;
    char fname[100];
    int n,i,j;
    printf("Please enter number of digit for sorting: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    fflush(stdin);
    printf("Please enter file name to save: ");
    gets(fname);
    fp=fopen(fname,"w");
    for(i=0;i<n;i++){
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);


    bool located;
    int temp;
    for(i=1;i<n;i++){
        located=false;
        temp=a[i];
        for(j=i-1;j>=0&&!located;){
            if(temp>a[j]){
                a[j+1] = a[j];
                j--;
            }
            else{
                located=true;
            }
        a[j+1]=temp;
        }
    }
    printf("--------------------------\n");

    printf("Now, you have the following sorted number:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    printf("Please enter file name: ");
    gets(fname);
    fp=fopen(fname,"w");
    for(i=0;i<n;i++){
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
    printf("FILE IS ALREADY SAVED.");
    return 0;
}