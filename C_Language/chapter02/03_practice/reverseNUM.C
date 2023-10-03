#include<stdio.h>

int main(){
    int n, remainder, rev = 0;
    printf("enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    printf("reversed number is: %d\n", rev);
    return 0;
}