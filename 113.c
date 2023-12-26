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
    int inputArray[n];
    int evenArray[n];
    int oddArray[n];
    int evenCount = 0;
    int oddCount = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &inputArray[i]);
        if (inputArray[i] % 2 == 0)
        {
            evenArray[evenCount] = inputArray[i];
            evenCount++;
        }
        else
        {
            oddArray[oddCount] = inputArray[i];
            oddCount++;
        }
    }
    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArray[i]);
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArray[i]);
    }
    return 0;
}
