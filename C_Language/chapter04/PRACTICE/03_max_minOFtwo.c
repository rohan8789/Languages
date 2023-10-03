#include<stdio.h>

int max(int, int);
int min(int, int);

int main(int argc, char const *argv[])
{
    int a, b, x, y, m, n;
    printf("enter two number: ");
    scanf("%d%d", &a, &b);

    x = max(a, b);
    y = min(a, b);

    printf("maximum of two num is: %d\n", x);
    printf("minimum of two number is: %d\n", y);
    return 0;
}

int max(int x, int y)
{
    int greater;
    if (x > y)
    {
        greater = x;
    }
    else
    {
        greater = y;
    }
    return greater;   
}

int min(int x, int y)
{
    int smaller;
    if (x < y)
    {
        smaller = x;
    }
    else
    {
        smaller = y;
    }
    return smaller;    
}