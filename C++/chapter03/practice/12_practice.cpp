/*
     1
    232
   34543
  4567654
 567898765
45678987654

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int n;
    cin >> n;
    int i, j,k;
    for (i = 1; i <= n; i++)
    {
        k=i;
        for (j = 1; j <= 2*n-1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
            {
                cout << k;
                j<n?k++:k--;
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}