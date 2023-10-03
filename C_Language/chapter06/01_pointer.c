#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10; //Normal variable decleration
    int *p;  //pointer variable decleration
    p = &a;  //stores address of variable a in pointer p

    printf("address stored in variable p is: %d\n", p); //address of a
    printf("address stored in variable p is: %x\n", p); //address of a in hexadecimal
    printf("address stored in variable p is: %X\n", p); //'' '' a in capital hexadec..

    printf("address stored in variable p is: %d\n", &a); // p = &a
    printf("address stored in variable p is: %d\n", *p); // value = 10
    return 0;
}
