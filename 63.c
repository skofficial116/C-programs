#include <stdio.h>
#include <stdlib.h>

int main()
{
    char binary[100];
    printf("Sachin Kumar\n");

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = strtol(binary, NULL, 2);
    printf("Hexadecimal representation: %X\n", decimal);

    return 0;
}
