#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " is an Even Number " << endl;
    }
    else
    {
        cout << a <<" is an Odd Number " << endl;
    }

    return 0;
}
