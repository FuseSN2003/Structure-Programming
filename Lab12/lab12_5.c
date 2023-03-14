#include <stdio.h>
#include <conio.h>
typedef struct
{
    char id[5];
    char name[100];
    char surname[100];
    char work[100];
    int age;
    char sex;
    char address[100];
}contain;
int main(){
    contain a[100],b[100];
    FILE *fp;
    char fname[100],choice,keep[100];
    int i=0,j,n;
    printf("Please enter name of file: ");
    gets(fname);
    fp=fopen(fname,"w");
    do{
        printf("Please enter ID: ");
        scanf("%s",a[i].id);
        fprintf(fp,"%s ",a[i].id);
        printf("Please enter name: ");
        scanf("%s",a[i].name);
        fprintf(fp,"%s ",a[i].name);
        printf("Please enter surname: ");
        scanf("%s",a[i].surname);
        fprintf(fp,"%s ",a[i].surname);
        printf("Please enter occupation: ");
        scanf("%s",a[i].work);
        fprintf(fp,"%s ",a[i].work);
        printf("Please enter age: ");
        scanf("%d",&a[i].age);
        fprintf(fp,"%d ",a[i].age);
        printf("Please enter sex: ");
        scanf(" %c",&a[i].sex);
        fprintf(fp,"%c ",a[i].sex);

        printf("Please enter address: ");
        fflush(stdin);
        scanf("%[^\n]",a[i].address);
        j=0;
        for (n = 0; a[i].address[n] != '\0'; n++) {
            if (a[i].address[n] != ' ') {
                b[i].address[j++] = a[i].address[n];
            }
        }
        fprintf(fp,"%s\n",b[i].address);

        printf("Do you want to continue (y/n): ");
        scanf(" %c",&choice);
        i++;
    }while(choice=='y');
    fclose(fp);
    printf("-------------------------------\n");
    printf("The list of person whose age over 20 are\n");
    fp=fopen(fname,"r");
    for(j=0;j<i;j++){
        fscanf(fp,"%s %s %s %s %d %c %s",a[j].id,a[j].name,a[j].surname,a[j].work,&a[j].age,&a[j].sex,a[j].address);
        if(a[j].age>=20){
            printf("%s %s %s %s %d %c\n",a[j].id,a[j].name,a[j].surname,a[j].work,a[j].age,a[j].sex);
        }
    }
    printf("-------------------------------");
    return 0;
}