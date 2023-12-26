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
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxElement = arr[0];
    int minElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
    printf("Maximum element: %d\n", maxElement);
    printf("Minimum element: %d\n", minElement);
    return 0;
}
