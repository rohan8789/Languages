#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n;
    printf("enter the first integer: ");
    scanf("%d", &m);
    printf("enter the second integer: ");
    scanf("%d", &n);

    printf("%d\n", abs(m));
    printf("%d\n", abs(n));
    return 0;
}