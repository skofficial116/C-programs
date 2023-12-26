#include <stdio.h>
int main()
{
    double base, exponent, result = 1.0;
    printf("Sachin Kumar\n");
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    if (exponent < 0)
    {
        printf("Exponent should be a non-negative number.\n");
    }
    else
    {
        for (int i = 1; i <= exponent; i++)
        {
            result *= base;
        }
        printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);
    }
    return 0;
}
