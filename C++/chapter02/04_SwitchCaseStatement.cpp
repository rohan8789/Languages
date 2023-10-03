/*
Switch case statement are substitute for Long IfElse statements 
which help us in comparing variable against multiple values*/

/*write a program for a Robot to Greet guest in different 
language, i.e, hindi when button1 is pressed, english when button2, 
french spanich and so on. write a 
c++ code for the above problem
.
this can be solved using IfElse and switch case both
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Tap on th button you wants the Robot to use that particular language: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Hello\n";
        break;

    case 2:
        cout << "Namestay\n";
        break;

    case 3:
        cout << "hola\n";
        break;

    default:
        cout << "I am stil learning\n";
        break;
    }
    return 0;
}
#include<iostream>
using namespace std

