#include <stdio.h>
int main()
{
    int i;
    printf("Sachin Kumar\n");
    printf("ASCII Characters and their Values:\n");
    for (i = 0; i < 128; i++)
    {
        printf("Character: %c, ASCII Value: %d\n", i, i);
    }
    return 0;
}
