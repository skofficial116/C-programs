#include <stdio.h>
#include <string.h>

int hexDigitToDecimal(char hexDigit)
{
    if (hexDigit >= '0' && hexDigit <= '9')
    {
        return hexDigit - '0';
    }
    else if (hexDigit >= 'A' && hexDigit <= 'F')
    {
        return hexDigit - 'A' + 10;
    }
    else if (hexDigit >= 'a' && hexDigit <= 'f')
    {
        return hexDigit - 'a' + 10;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char hexadecimal[100];
    printf("Sachin Kumar\n");

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    int decimal = 0;
    int len = strlen(hexadecimal);

    for (int i = 0; i < len; i++)
    {
        int digit = hexDigitToDecimal(hexadecimal[i]);
        if (digit == -1)
        {
            printf("Invalid hexadecimal digit: %c\n", hexadecimal[i]);
            return 1;
        }
        decimal = decimal * 16 + digit;
    }
    printf("Decimal representation: %d\n", decimal);
    return 0;
}
