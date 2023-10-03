#include <stdio.h>
int area(int x);

int main()
{
    int x, a;
    printf("Enter side of square: ");
    scanf("%d", &x);
    a = area(x);

    printf("Area of square is: %d\n", a);
    return 0;
}

int area(int x)
{
    int a;
    a = x * x;
    printf("area of square is %d", a);
}
