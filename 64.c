#include <stdio.h>

int main()
{
    long long octal, binary = 0;
    int digit, place = 1;
    printf("Sachin Kumar\n");
    printf("Enter an octal number: ");
    scanf("%lld", &octal);
    while (octal > 0)
    {
        digit = octal % 10;
        binary += digit * place;
        place *= 1000;
        octal /= 10;
    }
    printf("Binary equivalent: %lld\n", binary);
    return 0;
}
