#include<stdio.h>
void main()
{
    float a,b;
    printf("Sachin Kumar\n");
    printf("Enter the 1st number: ");
    scanf("%f", &a);
    printf("Enter the 2nd number: ");
    scanf("%f", &b);
    float x=a/b;
    printf("1st number: %0.4f\n", a);
    printf("2st number: %0.4f\n", b);
    printf("Answer is: %0.4f\n", x);
}
