#include<stdio.h>

int main()
{
    int length = 7;
    int breadth = 8;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("area is: %d\n", area);
    printf("perimeter is: %d\n", perimeter);

    if (area > perimeter)
    {
        printf("area is greater than its perimeter\n");
    }
    else
    {
        printf("area is smaller than its perimeter\n");
    }
    
    
    return 0;
}
