#include <stdio.h>

int main()
{
    int n;
    printf("Sachin Kumar\n");
    printf("Enter the number of values to read: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive value for 'n'.\n");
        return 1; 
    }

    int arr[n];
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Values in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
