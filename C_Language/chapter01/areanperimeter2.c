#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a= 8.0;
    float b=14.7;

    float area= a*b;
    float perimeter= 2*(a+b);

    printf("area of rectangle is: %f\n", area);
    printf("perimeter of rectangle is: %f\n", perimeter);
        return 0;
}

