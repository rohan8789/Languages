#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    c = a + b;
    printf("sum of a+b is: %d", c);

    return 0;
}
