#include<stdio.h>

int main()
{
    float C,F;
    printf("enter temperature in farenheit: ");
    scanf("%f", &F);

    C= 5*(F-32)/9;

    printf("temperature in celcius is: %f", C);


    return 0;
}
