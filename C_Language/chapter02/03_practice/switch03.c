#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    switch(num = 10){
    case 10 :
    printf("just 10\n");
    break;

    case 50 :
    printf("half century\n");
    break;

    case 100: 
    printf("century\n");
    break;

    case 200:
    printf("you are sachin\n");
    break;

    default:
    printf("invalid input");




    return 0;
}
