#include <stdio.h>

int main() {
    float num1, num2, product;
    printf("Sachin Kumar\n");

    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    product = num1 * num2;
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}
