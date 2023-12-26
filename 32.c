#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Sachin Kumar\n");
    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits in the given number: %d\n", count);
    return 0;
}
