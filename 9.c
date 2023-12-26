#include <stdio.h>

int main() {
    int a, b, c;
    printf("Sachin Kumar\n");

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);


    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;

    printf("After swapping, 'a' is %d and 'b' is %d and 'c' is %d\n", a, b,c);

    return 0;
}

