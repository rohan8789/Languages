#include <stdio.h>
#include<math.h>
int main()
{
    int a = 31;
    float b = 4.2;
    int z;
    z=b*a;
    // b*a=z; not possible, it is an assignment operator

    printf("value of a+b is %f\n", a + b);
    printf("value of a-b is %f\n", a - b);
    printf("value of a*b is %f\n", a * b);
    printf("value of a/b is %f\n", a / b);
    printf("value of z is %f\n", b*a);


    printf("5 when divided by 2 leaves remainder: %d\n", 5%2);
    printf("-5 when divided by 2 leaves remainder: %d\n", -5%2);
    printf("5 when divided by -2 leaves remainder: %d\n", 5%-2);

    //there is no operator to perform exponentiation in c
    // printf("value of 4^5 is: %d\n", 4^5);  will not give 4 to the power 5
    // to do this, include a header file--- #include<maths.h> than,
    printf("value of 4 to the power 5 is:%f\n", pow(4,5));  //it returns double thats why we use %f

    printf("value of 5/2 is %d\n", 5/2);
    printf("value of 5.0/2 is %f\n", 5.0/2);
    printf("value of 5/2.0 is %d\n", 5/2.0);
    printf("value of 2/5 is %d\n", 2/5);
    printf("value of 4.0/9 is %f\n", 4.0/9);


    printf("value of 6+5 is: %d\n", 6+5);
    printf("value of 6+5.7 is: %f\n", 6+5.7);
    printf("value of 6.2+5.8 is: %f\n", 6.2+5.8);


    printf("value of 3.0/9 is %f", 3.0/9);
    return 0;
}
