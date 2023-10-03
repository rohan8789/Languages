#include<stdio.h>

int IsPrime(int);

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    IsPrime(n);
    // printf("%d\n", IsPrime(n));
    return 0;
}

int IsPrime(int x)
{
    int i, j, count;
    for ( i = 1; i <= x; i++)
    {
        count = 0;
        for ( j = 1; j <= x; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d\n", i);
        } 
    }
    
}