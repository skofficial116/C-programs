#include <stdio.h>

int main()
{
    int rows, i, j, space;
    printf("Sachin Kumar\n");

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space < rows - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
