#include<stdio.h>

int cube(int);

int main()
{
    int n, y;
    printf("enter a number: ");
    scanf("%d", &n);
    y = cube(n);
    printf("cube of the given number is: %d\n", y);
    return 0;
}

int cube(int x)
{
    return x*x*x;
}
