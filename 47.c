#include <stdio.h>
int findLCM(int a, int b)
{
    int lcm = (a > b) ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
        lcm++;
    }
    return lcm;
}

int main()
{
    int num1, num2;
    printf("Sachin Kumar\n");
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = findLCM(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
