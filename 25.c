#include <stdio.h>
int main()
{
    int n;
    printf("Sachin Kumar\n");
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Natural numbers from 1 to %d are:\n", n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
