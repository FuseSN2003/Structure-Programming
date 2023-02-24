#include <stdio.h>

int main() {
    int order[7],n_shirt=0,price_fac=0,income=0,i;
    
    scanf("%d %d %d %d %d %d %d", &order[0],&order[1],&order[2],&order[3],&order[4],&order[5],&order[6]);
    for(i=0; i<7; i++){
        n_shirt+=order[i];
    }

    if(n_shirt<100){
        price_fac=n_shirt*80;
    }
    if(n_shirt>=100 && n_shirt<250){
        for(i=1; i<=100; i++){
            price_fac+=80;
        }
        for(i=101; i<=n_shirt; i++){
            price_fac+=70;
        }
    }
    if(n_shirt>=250){
        for(i=1; i<=100; i++){
            price_fac+=80;
        }
        for(i=101; i<=250; i++){
            price_fac+=70;
        }
        for(i=251; i<=n_shirt; i++){
            price_fac+=60;
        }
    }

    income = n_shirt*100;

    printf("%d\n", price_fac);
    printf("%d\n", income);
    printf("%d\n", income-price_fac);

    return 0;
}