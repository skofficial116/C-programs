#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Sachin Kumar\n");

    printf("Enter the 1st Number: ");
    scanf("%d", &a);

    printf("Enter the 2nd Number: ");
    scanf("%d", &b);

    printf("Enter the 3rd Number: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("1st is the Largest Number ");
    }
    else if (b >= a && b >= c)
    {
        printf("2nd is the Largest Number ");
    }
    else
    {
        printf("3rd is the Largest Number");
    }

    return 0;
}