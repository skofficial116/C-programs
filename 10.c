#include <stdio.h>
int main()
{
    printf("Sachin Kumar\n");

    int l,b;
    printf("Enter the length: ");
    scanf("%d", &l);

    printf("Enter the breadth: ");
    scanf("%d", &b);

    int Area=l*b;
    printf("Area of the Rectangle: %d", Area);

    return 0;
}
