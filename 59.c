#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100], onesComplement[100];
    int i;
    printf("Sachin Kumar\n");
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int length = strlen(binary);
    for (i = 0; i < length; i++)
    {
        if (binary[i] == '0')
            onesComplement[i] = '1';
        else if (binary[i] == '1')
            onesComplement[i] = '0';
        else
        {
            printf("Invalid binary input.\n");
            return 1;
        }
    }
    onesComplement[length] = '\0';

    printf("One's complement: %s\n", onesComplement);

    return 0;
}
