#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, *p;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *&a);
    printf("%d\n", *&p);
    printf("%u\n", *p);
    printf("%u\n", &a);
    printf("%u\n", &p);
    
    return 0;
}
