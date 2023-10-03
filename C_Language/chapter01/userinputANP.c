#include<stdio.h.>

int main()
{
    float a;
    int b=3;
    printf("enter length of rectangle: ");
    scanf("%f", &a);

    printf("enter width: ");
    scanf("%f", &b);

    float area= a*b;
    printf("area of rectangle: %f\n", area);

    float perimeter= 2*(a+b);
    printf("perimeter of rectangle: %f\n", perimeter);


    return 0;
}
