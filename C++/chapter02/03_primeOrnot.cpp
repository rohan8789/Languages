#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        cout << "prime number is: " << n;
    }
    else
    {
        cout << "Not a prime number" << n;
    }

    return 0;
}
