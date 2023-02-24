#include <stdio.h>
#include <ctype.h>

int main()
{
    char choices;
    int price=0;

    while (1)
    {
        printf("Welcome to vending machine. Enter 1-Sandwich, 2-cake, 3-Beverage: ");
        scanf(" %c", &choices);
        switch (choices)
        {
            case '1':
                printf("Enter 1-Tuna (30), 2-Hamburger (40), 3-Ham (35): ");
                scanf(" %c", &choices);
                switch (choices)
                {
                    case '1':
                        price+=30;
                        break;
                    case '2':
                        price+=40;
                        break;
                    case '3':
                        price+=35;
                        break;
                }
                break;
            case '2':
                printf("Enter 1-Donut (17), 2-JamRoll (15), Pastry (25): ");
                scanf(" %c", &choices);
                switch (choices)
                {
                    case '1':
                        price+=17;
                        break;
                    case '2':
                        price+=15;
                        break;
                    case '3':
                        price+=25;
                        break;
                }
                break;
            case '3':
            printf("Enter 1-Coke (15), 2-Est (15), 3-GreenTea (60)");
            scanf(" %c", &choices);
            switch (choices)
                {
                    case '1':
                        price+=15;
                        break;
                    case '2':
                        price+=15;
                        break;
                    case '3':
                        price+=60;
                        break;
                }
                break;
        }
        printf("Do you want to continue: ");
        scanf(" %c", &choices);
        if (toupper(choices)=='Y'){
            continue;
        }
        else if(toupper(choices)=='N'){
            break;
        }
    }
    printf("THANK YOU VERY MUCH. THE PRICE IS: %d BAHT", price);
    
    return 0;
}