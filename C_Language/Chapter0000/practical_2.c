#include <stdio.h>

int main()
{
    int x, y, smallCubes;
    printf("size of one side of bigger cube(in cm): ");
    scanf("%d", &x);

    printf("size of one side of smaller cube(in cm): ");
    scanf("%d", &y);

    smallCubes = (x / y) * (x / y) * (x / y);
    printf("number of smaller cubes generated is %d\n", smallCubes);
    return 0;
}
