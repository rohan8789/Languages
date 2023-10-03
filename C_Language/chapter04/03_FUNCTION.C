//Takes something returns nothing

#include<stdio.h>
void sub( int a, int b);

int main(int argc, char const *argv[])
{
    sub(20, 7);
    return 0;
}

void sub(int a, int b)
{
    int c;
    c = a - b;
    printf("sum is %d", c);
}

