#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitLoss;
    printf("Sachin Kumar\n");
    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);
    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0)
    {
        printf("Profit of %.2f\n", profitLoss);
    }
    else if (profitLoss < 0)
    {
        printf("Loss of %.2f\n", -profitLoss);
    }
    else
    {
        printf("No profit, no loss\n");
    }
    return 0;
}
