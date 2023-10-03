#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("neter age: \n");
    scanf("%d", &age);

    (age<18) ? printf("you cant drive") : printf("you can drive");
   //(condition) ? (if) : (else);
    return 0;
}
