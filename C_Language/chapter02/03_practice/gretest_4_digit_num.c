#include <stdio.h>

int main()
{
    float x, y, z, m;
    printf("enter first number: ");
    scanf("%f", &x);

    printf("enter second number: ");
    scanf("%f", &y);

    printf("enter third number: ");
    scanf("%f", &z);

    printf("enter fourth number: ");
    scanf("%f", &m);

    if (x > y && x > z && x > m)
    {
        printf("greatest of four number is: %f ", x);
    }
    else if ( y > z && y > m)
    {
        printf("greatest of four number is: %f", y);
    }
    else if (z > m)
    {
        printf("greatest of four digit number: %f", z);
    }
    else
    {
        printf("greatest of four number is: %f", m);
    }

    return 0;
}
