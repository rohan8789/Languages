//Tales nothing returns nothing.

#include <stdio.h>
void add(void);

int main()
{
    add();
    return 0;
}

void add()
{
    int a, b, c;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    c = a + b;
    printf("the sum is %d", c);
}
