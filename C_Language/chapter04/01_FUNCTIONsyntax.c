#include <stdio.h>
void display(); // function prototype

int main()
{
    int a;
    printf("initialising function\n");
    display();     //function call
    printf("function declared\n");
    return 0;
}
//function definition
void display()
{
    printf("this is display\n");
}