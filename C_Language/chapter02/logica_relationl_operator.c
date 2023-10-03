#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    int vipPass=0;
    vipPass=1;


    printf("enter your age: ");
    scanf("%d", &age);
    printf("your age is %d ", age);

    if((age>=18 && age<= 80) || vipPass==1)
    {
        printf("you can drive. if you have vipPass you can drive irrespective your age, safe journey");
    }

    else
    {
        printf("sorry, you cant drive");
    }
    
    if (age==50)
    {
        printf("half century");
    }
    //as number of conditions increases code becomes messy. to maintain readibikity of the program we us elogics or logical operator
    
    return 0;
}
