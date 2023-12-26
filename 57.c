#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num)
{
    int originalNum = num;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == originalNum);
}

int main()
{
    int n;
    printf("Sachin Kumar\n");

    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Strong numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (isStrongNumber(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
