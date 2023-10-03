#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age>18)
    {
        printf("you can vote\n");
    }

    printf("you cant vote");

    return 0;
}
