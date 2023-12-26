#include <stdio.h>

void convertToWords(int number)
{
    if (number < 1 || number > 9)
    {
        printf("Number out of range (1-9)\n");
    }
    else
    {
        char *words[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        printf("Number in words: %s\n", words[number - 1]);
    }
}

int main()
{
    int number;
    printf("Sachin Kumar\n");
    printf("Enter a number (1-9): ");
    scanf("%d", &number);
    convertToWords(number);
    return 0;
}
