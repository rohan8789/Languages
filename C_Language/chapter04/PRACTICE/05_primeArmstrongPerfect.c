#include<stdio.h>
#include<math.h>

char* prime(int);
char* armstrong(int);
int perfect(int);

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    prime(n);
    armstrong(n);
    // perfect(n);

    printf("result: %s\n", prime(n));
    printf("result: %s\n", armstrong(n));
    return 0;
}

char* prime(int x)
{
    int i, count = 0;
    for ( i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        return "primeNo";
    }
    else
    {
        return "not a primeNo";
    }
}

char* armstrong(int y)
{
    int n, temp, temp1, digit, rem, sum = 0, count = 0;
    temp = n;
    temp1 = n;
    while (n != 0)
    {
        digit = n % 10;
        count++;
        n = n / 10;
    }
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp = temp / 10;
    }
    if (sum == temp1)
    {
        return "armstrong number";
    }
    else
    {
        return "not an armstrong number";
    }
    
    
}