#include <stdio.h>
int main()
{
    long long decimal, octal = 0;
    int digit, place = 1;
    printf("Sachin Kumar\n");
    printf("Enter a decimal number: ");
    scanf("%lld", &decimal);

    while (decimal > 0)
    {
        digit = decimal % 8;
        octal += digit * place;
        place *= 10;
        decimal /= 8;
    }
    printf("Octal equivalent: %lld\n", octal);
    return 0;
}
