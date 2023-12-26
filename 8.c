#include <stdio.h>

int main()
{
    int a, b;
    printf("Sachin Kumar\n");

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping, 'a' is %d and 'b' is %d\n", a, b);

    return 0;
}
