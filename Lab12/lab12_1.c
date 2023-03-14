#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    FILE *fptr;
    char choice,fname[100];    
    char list[100]; 
    printf("Welcome to cs-kmutnb music shop\n");
    printf("Please enter name of file: ");
    gets(fname);
    fptr=fopen(fname,"w");
    fflush(stdin);
    do{
        printf("Please enter the product code: ");
        scanf("%s",list);
        fprintf(fptr,"%s ",list);
        printf("Please enter the product title: ");
        scanf("%s",list);
        fprintf(fptr,"%s ",list);
        printf("Please enter the name of artist: ");
        scanf("%s",list);
        fprintf(fptr,"%s ",list);
        printf("Please enter the issue date: ");
        scanf("%s",list);
        fprintf(fptr,"%s ",list);
        printf("Please enter the company: ");
        scanf("%s",list);
        fprintf(fptr,"%s ",list);
        printf("Please enter the price: ");
        scanf("%s",list);
        fprintf(fptr,"%s\n",list);
        printf("Do you want to continue ('y/n'): ");
        scanf(" %c",&choice);
        printf("\n");
    }while(choice=='y');
    fclose(fptr);
    printf("THANK YOU.\nTHE CS-KMUTNB MUSIC Shop IS CLOSING.\nNOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!");
    getch();
    return 0;
}