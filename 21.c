#include <stdio.h>

int main()
{
    int number;
    printf("Sachin Kumar\n");

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 7 == 0 || number % 9 == 0)
    {
        printf("The number is divisible by 7 or 9.\n");
    }
    else
    {
        printf("The number is not divisible by 7 or 9.\n");
    }

    return 0;
}
