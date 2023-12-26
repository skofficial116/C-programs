#include <stdio.h>
int main()
{
    float side1, side2, side3;
    printf("Sachin Kumar\n");
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("This is an equilateral triangle.\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("This is an isosceles triangle.\n");
    }
    else
    {
        printf("This is a scalene triangle.\n");
    }
    return 0;
}
