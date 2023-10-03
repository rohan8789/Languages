#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter your number: ");
    scanf("%d", &num);

    if (num==1)
    {
        printf("number is 1");
    }

    else if (num==4)
    {
        printf("number is 4");
    }
    
    else if (num==100)
    {
        printf("number is 100");
    }
    
    else
    {
        printf("its not 1,4,100");
    }
    
    
    return 0;
}
