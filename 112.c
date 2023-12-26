#include <stdio.h>
#include <stdlib.h>
int compareDescending(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
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
    qsort(arr, n, sizeof(int), compareDescending);

    printf("Sorted elements in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
