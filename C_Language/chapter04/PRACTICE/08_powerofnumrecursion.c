#include<stdio.h>
#include<math.h>

int power(int, int);

int main(int argc, char const *argv[])
{
    int m, n, y;
    printf("enter a number: ");
    scanf("%d", &m);
    printf("enter the power: ");
    scanf("%d", &n);
    y = power(m, n);

    printf("power of the given input is: %d\n", y);
    return 0;
}

int power(int p, int q)
{
    return pow(p, q);
}
