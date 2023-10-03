//to check weather a number is even or odd.

#include<stdio.h>

int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d", &a);

    if ( a%2==0)
    {
        printf("given number is even");
    }

    else
    {
        printf("number is odd");
    }
    
    
    return 0;
}
