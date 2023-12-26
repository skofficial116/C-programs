#include <stdio.h>

int main()
{
    long long decimal, binary = 0;
    int bit, place = 1;
    printf("Sachin Kumar\n");
    printf("Enter a decimal number: ");
    scanf("%lld", &decimal);

    while (decimal > 0)
    {
        bit = decimal % 2;
        binary += bit * place;
        place *= 10;
        decimal /= 2;
    }
    printf("Binary equivalent: %lld\n", binary);
    return 0;
}
