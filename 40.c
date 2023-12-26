#include <stdio.h>

int main()
{
    int number;
    printf("Sachin Kumar\n");

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Frequency of each digit in the integer:\n");
    for (int digit = 0; digit <= 9; digit++)
    {
        int count = 0;
        int temp = number;

        while (temp != 0)
        {
            if (temp % 10 == digit)
            {
                count++;
            }
            temp /= 10;
        }
        if (count > 0)
        {
            printf("Digit %d occurs %d times\n", digit, count);
        }
    }
    return 0;
}
