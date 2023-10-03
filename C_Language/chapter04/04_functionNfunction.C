//every function gets called directly or indirectly from main().


#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();

    return 0;
}

void GoodMorning()
{
    printf("hello, good morning\n");
    GoodAfternoon();
    GoodNight();
}

void GoodAfternoon()
{
    printf("hello, its afternoon\n");
}

void GoodNight()
{
    printf("hey, its getting dark. good night\n");
}
