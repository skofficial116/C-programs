#include <stdio.h>

int main()
{
    int n;
    printf("Sachin Kumar\n");

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
