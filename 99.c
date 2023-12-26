#include <stdio.h>
int main()
{
    float side1, side2, side3;
    printf("Sachin Kumar\n");
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("This is a valid triangle.\n");
    }
    else
    {
        printf("These side lengths do not form a valid triangle.\n");
    }
    return 0;
}
