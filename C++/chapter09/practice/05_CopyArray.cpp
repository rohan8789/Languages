// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[n];
//     int copy[n];
//     int i;
//     cin >> n;
//     cout << "Elements: ";
//     for (i = 0; i <= n; i++)
//     {
//         cin >> arr[i];
//         arr[i] == copy[i];
//         cout << copy[i] << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], cpy[n];
    int *x = arr;
    int *y = cpy;
    cout << "Elements: ";
    for (int i = 0; i <= n; i++)
    {
        cin >> *(x + i);
        *(y + i) = *(x + i);
        cout << *(y + i) << endl;
    }

    return 0;
}