#include <stdio.h>
#include <math.h>

int isArmstrong(int number)
{
    int originalNumber = number;
    int sum = 0;
    int numDigits = log10(number) + 1;

    while (number > 0)
    {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    return (sum == originalNumber);
}

int main()
{
    int n;
    printf("Sachin Kumar\n");

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
