#include<stdio.h>

int main()
{
    int a, b, total;
    printf("enter time taken(in days) to complete the task by first person: ");
    scanf("%d", &a);

    printf("enter time taken(in days) to complete the task by second person: ");
    scanf("%d", &b);

    total= (a*b)/(a+b);
    printf("Total number of days required to do the task if A and B works together is: %d", total);
    return 0;
}
