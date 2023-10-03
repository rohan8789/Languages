//calculate simple interest.

#include<stdio.h>

int main()
{
    float i,r,t;
    printf("give initial value: ");
    scanf("%f", &i);

    printf("input interest rate: ");
    scanf("%f", &r);

    printf("time, in years: ");
    scanf("%f", &t);

    float S;
    S=(i*r*t)/100;

    printf("simple interest of given details is: %f", S);
    

    return 0;
    }
