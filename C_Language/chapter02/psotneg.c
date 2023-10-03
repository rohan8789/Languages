// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("enter your number: ");
//     scanf("%d", &a);

//     if (a >= 0)
//     {
//         printf("number is positive");
//     }
//     else
//     {
//         printf("number is negative");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("enter your number: ");
//     scanf("%d", &n);

//     if (n % 7 == 0)
//     {
//         printf("n is divisible by 7");
//     }

//     else
//     {
//         printf("not diivisible");
//     }

//     return 0;
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 11;
    int n;

    printf("enter your number: ");
    scanf("%d", &n);

    if (n % x == 0 && n % y == 0)
    {
        printf("num is divisible");
    }

    else
    {
        printf("not ");
    }
    return 0;
}
