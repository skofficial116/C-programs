#include <stdio.h>
#include <math.h>
int main()
{
    long long binary;
    int decimal = 0, base = 0, digit;
    printf("Sachin Kumar\n");
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary > 0)
    {
        digit = binary % 10;
        decimal += digit * pow(2, base);
        binary /= 10;
        base++;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
