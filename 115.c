#include <stdio.h>
int main()
{
    int n;
    printf("Sachin Kumar\n");
    printf("Enter the number of elements in each array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive value for the number of elements.\n");
        return 1;
    }
    int array1[n], array2[n], mergedArray[2 * n];
    printf("Enter %d elements for the first array (in descending order):\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter %d elements for the second array (in descending order):\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < n && j < n)
    {
        if (array1[i] >= array2[j])
        {
            mergedArray[k] = array1[i];
            i++;
        }
        else
        {
            mergedArray[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        mergedArray[k] = array1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        mergedArray[k] = array2[j];
        j++;
        k++;
    }
    printf("Merged array in descending order:\n");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
