#include<stdio.h>

int main(int argc, char const *argv[])
{  
    int distance, time, x;
    printf("enter distance in kms: ");
    scanf("%d", &distance);

    printf("enter time taken: ");
    scanf("%d", &time);

    x=20*(distance/time);

    printf("speed of car is: %d", x);
    return 0;
}
