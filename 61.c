#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary)
{
    int decimal = 0, base = 0;
    while (binary > 0)
    {
        int digit = binary % 10;
        decimal += digit * pow(2, base);
        binary /= 10;
        base++;
    }
    return decimal;
}

int main()
{
    long long binary;
    int decimal = 0, octal = 0, octalDigit, place = 1;
    printf("Sachin Kumar\n");
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    decimal = binaryToDecimal(binary);

    while (decimal > 0)
    {
        octalDigit = decimal % 8;
        octal += octalDigit * place;
        decimal /= 8;
        place *= 10;
    }
    printf("Octal equivalent: %d\n", octal);
    return 0;
}
