#include <stdio.h>

int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int num;
    printf("Sachin Kumar\n");

    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);
    return 0;
}
