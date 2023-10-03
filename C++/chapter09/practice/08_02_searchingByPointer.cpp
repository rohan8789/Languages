#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    int *ptra = arr;
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptra + i);
    }
    int k, count = 0;
    cout << "Elements to search: ";
    cin >> k;
    for (i = 0; i < n; i++)
    {
        if (k == *(ptra + i))
        {
            cout << "Found element: " << k << endl;
            break;
        }
    }
    if (k != *(ptra + i))
    {
        cout << "Element not found";
    }

    return 0;
}