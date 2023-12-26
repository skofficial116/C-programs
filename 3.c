#include<stdio.h>
void main()
{
    float radius;
    printf("Sachin Kumar\n");
    printf("Enter the Radius: ");
    scanf("%f", &radius);

    float pi = 3.14;
    float area = radius*radius*pi;
    printf("Area of the Circle is: %0.4f", area);
}
