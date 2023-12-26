#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Sachin Kumar\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        number = -number;
    }
    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of the digits: %d\n", sum);
    return 0;
}
