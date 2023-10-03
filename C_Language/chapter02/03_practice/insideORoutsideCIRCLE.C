#include<stdio.h>

int main()
{
    int x, y, r, point, s;
    printf("enter the coordinates of center of the circle: ");
    scanf("%d%d", &x, &y);
    printf("enter the radius of the circle: ");
    scanf("%d", &r);
    s = x*x + y*y - r*r;

    if (s == point)
    {
        printf("on the circle\n");
    }
    else if (s > point)
    {
        printf("outside the circle\n");
    }
    else if(s < point)
    {
        printf("inside the circle\n");
    }
    else
    {
        printf("invalid input\n");
    }
    
    
    
    
    return 0;
}
