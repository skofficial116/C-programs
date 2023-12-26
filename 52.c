#include <stdio.h>

int isArmstrong(int number)
{
    int originalNumber = number;
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    return (sum == originalNumber);
}

int main()
{
    int number;
    printf("Sachin Kumar\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
