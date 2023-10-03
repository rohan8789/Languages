#include <stdio.h>
//sum is a function which takes a and b as input
//and returns an integer as an output.

int sum(int a, int b); // function prototype declerartion

int main()
{
    int d;
    d = sum(2, 8); // function call
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    printf("value of sum is %d", c);
    return c;
}
