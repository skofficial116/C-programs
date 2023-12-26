#include <stdio.h>
int main()
{
    float physics, chemistry, biology, mathematics, totalMarks, percentage;
    printf("Sachin Kumar\n");
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Biology: ");
    scanf("%f", &biology);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &mathematics);

    totalMarks = physics + chemistry + biology + mathematics;
    percentage = (totalMarks / 400) * 100;

    printf("Total marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
