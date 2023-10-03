#include <stdio.h>
#include <string.h>

int main()
{
    int x, y;
    char c, str[100];
    printf("write your integer number: ");
    scanf("%d\n", &x);

    float y;
    printf("enter a float value");
    scanf("%f\n", &y);

    char c = 'x';
    printf("write a chara:");
    scanf("%c", &c);

    char str[10];
    printf("print your word");
    scanf("%s", &str);

    return 0;
}
