#include <stdio.h>

int main()
{
    float income;
    float tax;
    printf("enter your income:");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.3 * (income - 1000000);
    }

        printf("income tax paid by employee is %f\n ", tax);
    

    return 0;
}
