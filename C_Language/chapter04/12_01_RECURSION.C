//calculate factorial using recursion
#include<stdio.h>

int fact(int);

int main()
{
    int a, y;
    printf("Eneter a number: ");
    scanf("%d", &a);

    y = fact(a);

    printf("Factorial of the given number %d is: %d\n", a, y);
    return 0;
}

int fact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x;
    }
    
    
}
