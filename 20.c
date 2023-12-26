#include <stdio.h>

int main()
{
    printf("Sachin Kumar\n");

    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int postIncrement1 = num1++;
    int postDecrement2 = num2--;

    printf("Original value of the first integer: %d\n", num1);
    printf("Updated value of the first integer (post-increment): %d\n", postIncrement1);
    printf("Original value of the second integer: %d\n", num2);
    printf("Updated value of the second integer (post-decrement): %d\n", postDecrement2);

    return 0;
}
