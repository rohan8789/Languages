//delete an element at specified position
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k, j;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            count++;
            break;
        }
    }
    if (count == 1)
            {
                for (i = 0; i < n - 1; i++)
                {
                    cout << arr[i] << " ";
                }
            }
    return 0;
}