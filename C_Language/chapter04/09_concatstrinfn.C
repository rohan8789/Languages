#include<string.h>
#include<string.h>

void cat(char [], char[]);

#include<stdio.h>

int main(){
    char x[100];
    char y[100];
    
    printf("enter a string: ");
    gets(x);
    printf("enter  second str: ");
    gets(y);
    cat(x, y);
    printf("after cat %s\n", x);
    return 0;
}

void cat(char a[], char b[])
{
    strcat(a, b);
}