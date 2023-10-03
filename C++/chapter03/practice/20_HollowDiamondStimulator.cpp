#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if ((i >= 2) && (i <= n - 1) && (k >= 2) && (k <= 2 * i - 2))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}