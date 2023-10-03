#include<stdio.h>
#include<string.h>

void copy(char x[], char y[]);

int main()
{
    char x[100];
    char y[100];
    printf("input a string: ");
    gets(x);

    copy(y, x);
    printf("string after copy is %s\n", y);
    return 0;
}

void copy(char a[], char b[])
{
    strcpy(a, b);
}

