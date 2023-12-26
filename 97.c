#include <stdio.h>
int main()
{
    int amount;
    printf("Sachin Kumar\n");
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    int notes[7] = {2000, 500, 200, 100, 50, 20, 10};
    int count[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        count[i] = amount / notes[i];
        amount %= notes[i];
    }

    printf("Total number of notes:\n");
    for (int i = 0; i < 7; i++)
    {
        if (count[i] > 0)
        {
            printf("%d notes of Rs %d\n", count[i], notes[i]);
        }
    }
    return 0;
}
