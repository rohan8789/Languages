// #include <stdio.h>

// int main()
// {
//     int age;
//     float percentage;
//     char name[20];
//     long long int contact;

//     printf("enter your name(IN BLOCK): ");
//     //scanf("%s", name);
//     gets(name);

//     printf("write your age: ");
//     scanf("%d", &age);

//     printf("enter your contact number: ");
//     scanf("%lld", &contact);

//     printf("enter your percentage in matrics: ");
//     scanf("%f", &percentage);

//     printf("Thank you. your data is saved in our system\n");

//     printf("Name= %s\n", name);
//     printf("Age= %d\n", age);
//     printf("Contact number= %lld\n", contact);
//     printf("percentage = %.2f\n", percentage);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    float b;
    char name[30];
    char word;

    printf("enter an integer: ");
    scanf("%d", &a);

    printf("enter a float number: ");
    scanf("%f", &b);

    printf("type any name: ");
    scanf("%s", name);

    printf("integer = %d\n", a);
    printf("flaot num = %f\n", b);
    printf("name= %s\n", name);

    return 0;
}