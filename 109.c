#include <stdio.h>

int main()
{
    int n;
    printf("Sachin Kumar\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive value for the number of elements.\n");
        return 1;
    }
    int sourceArray[n];
    int destinationArray[n];
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sourceArray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        destinationArray[i] = sourceArray[i];
    }
    printf("Elements copied from the source array to the destination array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", destinationArray[i]);
    }
    return 0;
}
