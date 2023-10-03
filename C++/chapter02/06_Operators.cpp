//Operators are the the operators to perform some arthimetic operations.
/*
1. Arithemetic Operators
    binary(+, -, *, /) and unary(++, --) operators.

pre Increment(++a):-
    increment a instantly.

post-increment(a++):- 
    current value of a is preserved temporarily.
    a will get incremented before the next statement 
    is executed.

let's see this with an example
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b;
     b = ++a;
    //b = a++;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
