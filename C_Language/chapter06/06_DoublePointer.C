#include <stdio.h>

int *Greater(int *, int *);

int main()
{
    int m, n;
    int *p;
    printf("enter first numbers: ");
    scanf("%d", &m);
    printf("Enter second number: ");
    scanf("%d", &n);

    p = Greater(&m, &n);

    printf("greater number is: %d\n", *p);

    return 0;
}

int *Greater(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
