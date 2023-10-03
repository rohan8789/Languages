// Defines relation between two operands and returns a boolean Value.
/*
1. == gives true if both operands have equal values
2. != gives true if both operands are not equal(sch ko jhuth).
3. > gives true if left operand is greater
4. < gives true if right operand is greater.
5 >= gives true if left operand is greater than or equal.....
6. <= ... and so on.
*/

//input a number n and tell whether it is less than, equak to or greater than 10.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 10)
        cout << "Entered number is greater than 10 which is: " << x;

    else if (x < 10)
        cout << "Entered number is less than 10 which is: " << x;

    else
        cout << "Entered number is equal to 10";
    return 0;
}
