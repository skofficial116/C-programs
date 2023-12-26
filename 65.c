#include <stdio.h>
#include <math.h>

int main()
{
    long long octal, decimal = 0;
    int digit, place = 0;
    printf("Sachin Kumar\n");
    printf("Enter an octal number: ");
    scanf("%lld", &octal);
    while (octal > 0)
    {
        digit = octal % 10;
        decimal += digit * pow(8, place);
        ++place;
        octal /= 10;
    }
    printf("Decimal equivalent: %lld\n", decimal);
    return 0;
}
