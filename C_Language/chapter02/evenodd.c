#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter first number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("a is even");
    }

    else
    {
        printf("odd number");
    }
    return 0;
}
