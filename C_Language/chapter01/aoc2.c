#include <stdio.h>

int main()
{
    int radius;
    float area;
    printf("entre the radius of circle\n");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("area of circle: %f\n", area);

    return 0;
}