#include <stdio.h>
#include <math.h>

float rectangle(int width, int height) {
    return width*height;
}

float circle(float r){
    return M_PI*pow(r, 2);
}

void main() {
    int choices,width,height;
    float r;
    printf("============ MENU ============\n");
    printf("1. Calculate area of rectangle\n");
    printf("2. Calculate area of circle\n");

    printf("Please enter 1 or 2: ");
    scanf("%d", &choices);
    
    switch(choices) {
        case 1:
            printf("Please enter width: ");
            scanf("%d", &width);
            printf("Please enter height: ");
            scanf("%d", &height);
            printf("Area = %.2f", rectangle(width,height));
            break;
        case 2:
            printf("Please enter radius: ");
            scanf("%f", &r);
            printf("Area = %.2f", circle(r));
            break;
        default:
            break;
    }

}