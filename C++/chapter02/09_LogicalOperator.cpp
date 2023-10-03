/*
Used to connect multiple condition and statement together. 
avoid nesting, keeps code short.

&& ---> AND gives true if both operands are true, else false.
|| ---> OR gives true if atleast one operand is true
! ----> NOT gives opposite of logical value. sch ka jhuth.

Write a program to check if 
1. number is divisible by 2 and 3.
2. number is divisible by either 2 or 3. 
3. number is divisible by 2 not 3
4. number is divisible by 3 not 2.
4. neither by 3 nor by 2.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Number is divisible by both 2 and 3 and number is: " << n << endl;
    }
    else if (n %2 == 0 || n % 3 == 0)
    {
        cout <<"Number is divisible either by 2 or 3 and number is: "<< n << endl;
    }
    else if (n % 2 != 0 && n % 3 != 0)
    {
        cout<<"NEither by 2 nor by 3 and number is: "<< n << endl;
    }
    
    
    return 0;
}
