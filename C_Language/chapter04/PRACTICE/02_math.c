#include<stdio.h>
#include<math.h>

int diameter(int);
float area(int);
float circumference(int);

int main()
{
    int r, a;
    float b, c;
    printf("enter the radius of the circle: ");
    scanf("%d", &r);
    a = diameter(r);
    b = area(r);
    c = circumference(r);

    printf("diameter, area and circumference of the circle is: %d\n%f\n%f\n", a, b, c);

    return 0;
}

int diameter(int x)
{
    int a;
    a = 2 * x;
    return a; 
}
float area(int y)
{
    float b;
    b = 3.14 * y * y;
    return b;
}
float circumference(int z)
{
    float c;
    c = 2 * 3.14 * z;
    return c;
}