#include <stdio.h>
int main()
{
    int cubiod;
    printf("Sachin Kumar\n");

    printf("\n");
    printf("Want to find area press 1 \nWant to find volume press 2\n");
    scanf("%d", &cubiod);

    if (cubiod == 1)
    {
        float length, breadth, height;
        printf("You Wanted to find the Area of Cubiod\n");
        printf("\n");
        printf("Please Enter the Length of the Side ");
        scanf("%f", &length);
        printf("\n");
        printf("Please Enter the Breadth of the Side ");
        scanf("%f", &breadth);
        printf("\n");
        printf("Please Enter the Height of the Side ");
        scanf("%f", &height);

        float area = 2 * height * (length * breadth);
        printf("\nArea of the Cuboid is %0.4f", area);
    }
    else if (cubiod == 2)
    {
        float length, breadth, hight;
        printf("You Wanted to find the Volume of Cubiod\n");
        printf("\n");
        printf("Please Enter the Length of the Cubiod ");
        scanf("%f", &length);
        printf("\n");
        printf("Please Enter the Breadth of the Cubiod ");
        scanf("%f", &breadth);
        printf("\n");
        printf("Please Enter the Hight of the Cubiod ");
        scanf("%f", &hight);
        printf("\n");
        float volume = length * breadth * hight;
        printf("\nVolume of the Cuboid is %0.4f", volume);
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}
