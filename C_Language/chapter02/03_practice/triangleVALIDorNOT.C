#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("enter the three sides og the triangle: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x + y > z && x + z > y && y + z > x)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
    
    return 0;
}
