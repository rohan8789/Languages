//find the lenght n reverse string
#include <stdio.h>

int length(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
        return (i);
    }
    *(p+i)='\0';
}

int main()
{
    char c[] = "Computer";
    printf("%d", length("Computer"));
return 0;
}