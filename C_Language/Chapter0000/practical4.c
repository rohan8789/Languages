#include <stdio.h>

int main()
{
    int m, n, TotalStudents;
    printf("enter rank of sonu from top: ");
    scanf("%d", &m);

    printf("enter rank of sonu from bottom: ");
    scanf("%d", &n);

    TotalStudents = m + n - 1;
    printf("total students in the class is: %d\n", TotalStudents);
    return 0;
}
