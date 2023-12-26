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
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isStrongNumber(n))
    {
        printf("%d is a strong number.\n", n);
    }
    else
    {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}
