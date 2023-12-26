#include <stdio.h>
int main()
{
    int number, firstDigit, lastDigit, sum;
    printf("Sachin Kumar\n");
    
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        number = -number;
    }
    lastDigit = number % 10;
    while (number >= 10)
    {
        number /= 10;
    }
    firstDigit = number;
    sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits: %d\n", sum);
    return 0;
}
