#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j;
    cout << "Enter the number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
           cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
