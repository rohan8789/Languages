#include <stdio.h>

int main()
{
    int a, b, c, min;
    printf("height of amar, akbar, anthony is: ");
    scanf("%d, %d, %d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("a is smaller\n");
    }
    else if (b < c)
    {
        printf("b is smaaleer\n");
    }

    else
    {
        printf("c is smaller\n");
    }
    return 0;
}