#include <stdio.h>

int main()
{
    int number, originalNumber, reversedNumber = 0;
    printf("Sachin Kumar\n");

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        printf("%d is a palindrome number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}
