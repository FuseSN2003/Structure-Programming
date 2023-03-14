#include <stdio.h>
#include <conio.h>
typedef struct
{
    int product;
    char name[100];
    float price;
    int n;
}contain;
int main(){
    contain a[3],choose;
    FILE *fp;
    char choice;
    int code,amount,i;
    printf("Welcome to KMUTNB Shop\n");
    do{
        printf("The list of product:\n");
        fp=fopen("product.txt","r");
        for(i=0;i<3;i++){
            fscanf(fp,"%d %s %f %d",&a[i].product,a[i].name,&a[i].price,&a[i].n);
            printf("%d %s %.1f %d\n",a[i].product,a[i].name,a[i].price,a[i].n);
        }
        fclose(fp);
        printf("Please enter the product code: ");
        scanf("%d",&code);
        for(i=0;i<3;i++){
            if(code==a[i].product){
                printf("You have chosen %s with Price %.1f\n",a[i].name,a[i].price);
                printf("How many? ");
                scanf("%d",&amount);
                printf("Your total price is %.1f\n",a[i].price*amount);
                a[i].n-=amount;
            }
        }
        printf("THANK YOU.");
        printf("Do you want to continue ('y/n'): ");
        scanf(" %c",&choice);
        fp=fopen("product.txt","w");
        for(i=0;i<3;i++){
            fprintf(fp,"%d %s %.1f %d\n",a[i].product,a[i].name,a[i].price,a[i].n);
        }  
        fclose(fp);
    }while(choice=='y');

    printf("THE SHOP IS CLOSING.\nNOW, WE ARE WRITING THE REMAINING QTY OF GOODS FOR TOMORROW!");
    return 0;
}