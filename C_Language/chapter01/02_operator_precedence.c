#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 3;
    printf("the value of 3*x-4*y is %d\n", 3 * x - 4 * y);
    printf("the value of 3*(x-4*y) is %d\n", 3 * (x - 4 * y));
    printf("the value of 8*x/3*y is %d\n", 8 * x / 3 * y);
    // 8*3/3*x = 24/6 will give wrong answer, c do not follow bodmas
    // 24/3*2
    // 8*2
    //16


    // 1. * / %
    // + -
    // = ---> is the operator precedence.

    return 0;
}
