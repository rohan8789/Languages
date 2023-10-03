#include<stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, m1, m2;
    printf("enter first point: ");
    scanf("%f%f", &x1, &y1);
    printf("enter second point: ");
    scanf("%f%f", &x2, &y2);
    printf("enter third point: ");
    scanf("%f%f", &x3, &y3);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2); 
    if (m1 == m2)
    {
        printf("all three point falls over a line");
    }
    else
    {
        printf("does not fall over a line");
    }
    
    

    return 0;
}
