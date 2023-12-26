#include <stdio.h>

int isPerfect(int number)
{
    int sum = 1;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            if (i * i != number)
            {
                sum += i + (number / i);
            }
            else
            {
                sum += i;
            }
        }
    }
    return (sum == number);
}

int main()
{
    int n;
    printf("Sachin Kumar\n");
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are: ", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPerfect(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
