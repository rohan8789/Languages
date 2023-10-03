//code to check wheather a num is divisible by 97 or not

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    printf("divisibility test returns: %d\n", num % 97);

    //using if else condition for above question

    int x;
    printf("enter a number: ");
    scanf("%d", &x);

    if (x % 97 == 0)
    {
        printf("%d is divisible by 97", x);
    }

    else
    {
        printf("%d is not divisible by 97", x);
    }

    return 0;
}
