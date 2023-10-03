//keep on taking input until or unless user input a -ve number.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    while (a > 0)
    {
        cout << "Entered number is: " << a <<endl;
        cin>>a;
        
    }

    return 0;
}
