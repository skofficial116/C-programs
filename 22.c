#include <stdio.h>

int main()
{
    char gender;
    printf("Sachin Kumar\n");

    printf("Enter a single character for gender (M/m for Male, F/f for Female): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm')
    {
        printf("Gender: Male\n");
    }
    else if (gender == 'F' || gender == 'f')
    {
        printf("Gender: Female\n");
    }
    else
    {
        printf("Invalid input for gender.\n");
    }

    return 0;
}
