#include <stdio.h>
int main()
{
    int number;
    printf("Sachin Kumar\n");
    
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);
    printf("Multiplication Table for %d:\n", number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
