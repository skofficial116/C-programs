#include <stdio.h>

int main()
{
    float unitCharges, totalBill;
    printf("Sachin Kumar\n");
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges <= 50)
    {
        totalBill = unitCharges * 0.50;
    }
    else if (unitCharges <= 150)
    {
        totalBill = 25 + (unitCharges - 50) * 0.75;
    }
    else if (unitCharges <= 250)
    {
        totalBill = 100 + (unitCharges - 150) * 1.20;
    }
    else
    {
        totalBill = 220 + (unitCharges - 250) * 1.50;
    }

    printf("Total Electricity Bill: %.2f\n", totalBill);

    return 0;
}
