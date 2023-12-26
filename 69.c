#include <stdio.h>
int main()
{
    long long decimal;
    int remainder, i = 0;
    char hexadecimal[100];
    printf("Sachin Kumar\n");
    printf("Enter a decimal number: ");
    scanf("%lld", &decimal);

    while (decimal > 0)
    {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = remainder + '0';
        else
            hexadecimal[i] = remainder - 10 + 'A';
        i++;
        decimal /= 16;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
    return 0;
}
