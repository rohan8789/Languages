/* A Basic calculator can do addition substraction mult, and divison*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter the operator eg +/-/*: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Please Input a valid operator";
        break;
    }
    return 0;
}
