#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, j, count = 1;
    cout << "ENter the number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << "\n";
    }
    return 0;
}
