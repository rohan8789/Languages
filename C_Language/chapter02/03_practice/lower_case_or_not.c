#include<stdio.h>

int main()
{
    char ch;
    printf("enter your character: ");
    scanf("%c", ch);

    if (ch<=122 && ch>=97)
    {
        printf("it is a lower case character");
    }
    else
    {
        printf("it is not a lower case character");
    }
    
    return 0;
}
