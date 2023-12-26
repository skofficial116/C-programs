#include <stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Sachin Kumar\n");
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180.0)
    {
        if (angle1 > 0 && angle2 > 0 && angle3 > 0)
        {
            printf("This is a valid triangle.\n");
        }
        else
        {
            printf("All angles must be greater than 0.\n");
        }
    }
    else
    {
        printf("The sum of angles is not 180 degrees, so it's not a valid triangle.\n");
    }
    return 0;
}
