#include <stdio.h>

int main()
{
    //1. int a;
    // b=a;  invalid because b is not declared

    int a;
    int b = a;
    //valid statement

    float x = 3 ^ 3;
    printf("%f\n", x); // 2. valid

    // char dt= 'dec'; //invalid
    char dt = 'd'; //valid

    printf("value 0f 3.0/8-2 is %f\n", 3.0 / 8 - 2); //returns double value


    return 0;
}
