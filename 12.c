#include <stdio.h>
#include <math.h>

void main() {
    int input;
    printf("Sachin Kumar\n");
    printf("Enter 1 for Right-angled Triangle,\n      2 for Isosceles triangle and\n      3 for a triangle with three sides\n");
    scanf("%d", &input);
    printf("\n");

    if (input ==1){
        int base1,height1;
        printf("Selected triangle is Right-angled triangle\n");
        printf("Enter Height and Base\n");
        scanf("%d %d", &height1,&base1);
        float area1= (float)(height1*base1)/2;
        printf("Area of Right-angled triangle is %0.2f", area1);
    }
    else if (input==2){
        int base2,height2;
        printf("Selected triangle is Isosceles triangle\n");
        printf("Enter Height and Base\n");
        scanf("%d %d", &height2,&base2);
        float area2= (float)(height2*base2)/2;
        printf("Area of Isosceles triangle is %0.2f", area2);
    }
    else if (input==3){
        int side1,side2, side3;
        printf("Selected Triangle has three sides\n");
        printf("Enter Height and Base\n");
        scanf("%d %d", &side1, &side2, &side3);
        float spm= (float)(side1+side2+side3)/2;
        float area3= (float)sqrt (spm*(spm-side1)*(spm-side2)*(spm-side3));
        printf("Area of the given triangleis %0.2f", area3);
    }
    else {
        printf("Invalid Input.");
    };

}
