#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
