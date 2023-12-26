#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100], twosComplement[100];
    int i, carry = 1;
    printf("Sachin Kumar\n");

    printf("Enter a binary number: ");
    scanf("%s", binary);
    int length = strlen(binary);
    for (i = length - 1; i >= 0; i--)
    {
        if (binary[i] == '0' && carry == 1)
        {
            twosComplement[i] = '1';
            carry = 0;
        }
        else if (binary[i] == '1' && carry == 1)
        {
            twosComplement[i] = '0';
        }
        else
        {
            twosComplement[i] = binary[i];
        }
    }
    twosComplement[length] = '\0';
    printf("Two's complement: %s\n", twosComplement);
    return 0;
}
