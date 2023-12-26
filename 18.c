#include <stdio.h>

int main()
{
    int num, shift;
    printf("Sachin Kumar\n");

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Enter the number of positions to right shift: ");
    scanf("%d", &shift);

    int result = num >> shift;

    printf("Right-shifted result: %d\n", result);

    return 0;
}
