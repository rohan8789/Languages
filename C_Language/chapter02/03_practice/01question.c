#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    // if(a=11)
    if (a == 11)
    {
        printf("i am 11"); /*== is comparison operator whereas = is assognment operator. here a was given value as 11 using assignment operator
                               later corrected by using comparison operator*/
    }
    else
    {
        printf("i am not 11");
    }

    return 0;
}
