#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter a");
    scanf("%d", &a);

    switch (a)
    {
    case 3:
        printf("value is 3");
        break;
    case 4:
        printf("value is 4");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;
}
