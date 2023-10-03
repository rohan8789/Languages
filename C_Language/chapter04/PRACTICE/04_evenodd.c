#include<stdio.h>

char* evod(int);

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    printf("result: %s\n", evod(n));
    
    return 0;
}

char* evod(int x)
{
    if (x % 2 == 0)
    {
        return "even";
    }
    else
    {
        return "odd";
    }
}