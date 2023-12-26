#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Sachin Kumar\n");
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum);
    }
    return 0;
}
