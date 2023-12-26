#include <stdio.h>
int main()
{
    int cube;
    printf("Sachin Kumar\n");
    
    printf("\n");
    printf("Want to find area press 1 \nWant to find volume press 2\n");
    scanf("%d", &cube);

    if(cube==1){
        int side;
        printf("You Wanted to find the Area of Cube\n");
        printf("\n");
        printf("Please Enter the length of the Side ");
        scanf("%d", &side);
        int area = 6*side*side;
        printf("Area of the Cube is %d", area);
    }
    else if(cube==2){
        int side;
        printf("You Wanted to find the Volume of Cube\n");
        printf("\n");
        printf("Please Enter the length of the Side ");
        scanf("%d", &side);
        int volume = side*side*side;
        printf("Volume of the Cube is %d", volume);
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}
