#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hexDigitToBinary(char hexDigit)
{
    switch (hexDigit)
    {
    case '0':
        return "0000";
    case '1':
        return "0001";
    case '2':
        return "0010";
    case '3':
        return "0011";
    case '4':
        return "0100";
    case '5':
        return "0101";
    case '6':
        return "0110";
    case '7':
        return "0111";
    case '8':
        return "1000";
    case '9':
        return "1001";
    case 'A':
    case 'a':
        return "1010";
    case 'B':
    case 'b':
        return "1011";
    case 'C':
    case 'c':
        return "1100";
    case 'D':
    case 'd':
        return "1101";
    case 'E':
    case 'e':
        return "1110";
    case 'F':
    case 'f':
        return "1111";
    default:
        return "Invalid Hexadecimal Digit";
    }
}
int main()
{
    char hexadecimal[100];
    printf("Sachin Kumar\n");
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    char binary[400] = "";
    int len = strlen(hexadecimal);

    for (int i = 0; i < len; i++)
    {
        char *binaryDigit = hexDigitToBinary(hexadecimal[i]);
        strcat(binary, binaryDigit);
    }
    int remainder = strlen(binary) % 3;
    if (remainder != 0)
    {
        int padding = 3 - remainder;
        char paddingZeros[4] = "000";
        strncat(binary, paddingZeros, padding);
    }
    int binaryLen = strlen(binary);
    int octalLen = binaryLen / 3;
    char octal[100] = "";
    int j = 0;
    for (int i = 0; i < binaryLen; i += 3)
    {
        char octalDigit[4];
        strncpy(octalDigit, binary + i, 3);
        octalDigit[3] = '\0';
        int decimalValue = strtol(octalDigit, NULL, 2);
        octal[j] = '0' + decimalValue;
        j++;
    }
    octal[j] = '\0';
    printf("Octal representation: %s\n", octal);
    return 0;
}
