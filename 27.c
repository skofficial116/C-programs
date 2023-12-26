#include <stdio.h>
int main()
{
    int i;
    printf("Sachin Kumar\n");
    
    printf("Odd numbers between 1 and 100:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
