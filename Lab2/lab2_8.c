#include <stdio.h>
#include <string.h>

int main()
{

    char invoice_number[7],date[10],due_date[10],customer_name[25],item1[15],item2[15],item3[15];
    float amount1,amount2,amount3,price1,price2,price3;
    float total_price1,total_price2,total_price3,total_amount,amount_due,vat;

    printf("Please enter the invoice number: ");
    scanf("%s", invoice_number);
    printf("Please enter the date: ");
    scanf("%s", date);
    printf("Please enter the due date: ");
    scanf("%s", due_date);
    printf("Please enter the customer name: ");
    scanf("%s", customer_name);
    
    printf("Please enter the name of item1: ");
    scanf("%s", item1);
    printf("Please enter the quantity of item 1: ");
    scanf("%f", &amount1);
    printf("Please enter the unit price of item 1: ");
    scanf("%f", &price1);
    printf("Please enter the name of item2: ");
    scanf("%s", item2);
    printf("Please enter the quantity of item 2: ");
    scanf("%f", &amount2);
    printf("Please enter the unit price of item 2: ");
    scanf("%f", &price2);
    printf("Please enter the name of item3: ");
    scanf("%s", item3);
    printf("Please enter the quantity of item 3: ");
    scanf("%f", &amount3);
    printf("Please enter the unit price of item 3: ");
    scanf("%f", &price3);

    total_price1 = price1*amount1;
    total_price2 = price2*amount2;
    total_price3 = price3*amount3;
    total_amount = total_price1+total_price2+total_price3;
    vat = total_amount*0.07;
    amount_due = total_amount+vat;

    printf("Invoice No.: %s                             Date: %s\n", invoice_number, date);
    printf("Customer: %s                                Due Date: %s\n",customer_name,due_date);
    printf("#   | Item Name                 | Unit Price            | Quantity          | Total Price\n");
    printf("1   | %s                        | %.2f                  | %.0f                | %.2f        \n", item1,price1,amount1,total_price1);
    printf("2   | %s                        | %.2f                  | %.0f                | %.2f        \n", item2,price2,amount2,total_price2);
    printf("3   | %s                        | %.2f                  | %.0f                | %.2f        \n", item3,price3,amount3,total_price3);
    printf("                                                                    Total Amount : %.2f\n",total_amount);
    printf("                                                                    VAT : %.2f\n",vat);
    printf("                                                                    Amount Due : %.2f\n",amount_due);


    return 0;
}