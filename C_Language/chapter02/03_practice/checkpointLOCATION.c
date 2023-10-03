#include <stdio.h>

int main()
{
    int x, y;
    printf("enter the x coordinate of the point: ");
    scanf("%d", &x);
    printf("enter the y axis of the coordinate: ");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("x axis\n");
    }
    else if (x == 0)
    {
        printf("y axis\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("origin\n");
    }
    else
    {
        printf("invalid input\n");
    }
    
    

    return 0;
}