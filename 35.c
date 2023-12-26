#include <stdio.h>
int main()
{
    int number, originalNumber, firstDigit, lastDigit, swappedNumber = 0, multiplier = 1;
    printf("Sachin Kumar\n");

    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
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
    swappedNumber = lastDigit * multiplier;
    int temp = originalNumber;
    while (temp >= 10)
    {
        multiplier *= 10;
        temp /= 10;
    }
    swappedNumber += (originalNumber % multiplier) - lastDigit + firstDigit;
    printf("Number after swapping first and last digits: %d\n", swappedNumber);
    return 0;
}
