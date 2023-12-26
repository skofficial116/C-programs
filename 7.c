#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Sachin Kumar\n");

    printf("Enter three Number \n");
    scanf("%d %d %d", &a,&b,&c);

    printf("Originally a=%d  b=%d c=%d \n", a,b,c);

    a=a+b+c;
    c=a-(b+c);
    b=a-(b+c);
    a=a-(b+c);


    printf("After Swapping \n a = %d   b = %d    c = %d\n", a,b,c);

    return 0;
}

