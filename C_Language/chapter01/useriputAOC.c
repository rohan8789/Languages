#include<stdio.h>

int main(int argc, char const *argv[])
{
    int radius;
    float area;

    printf("enter radius of circle: ");
    scanf("%d", &radius);

    area= 3.142*radius*radius;

    printf("area of circle is: %f", area);
    return 0;
}
