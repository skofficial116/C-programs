#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, realPart, imaginaryPart;
    printf("Sachin Kumar\n");
    printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root);
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}
