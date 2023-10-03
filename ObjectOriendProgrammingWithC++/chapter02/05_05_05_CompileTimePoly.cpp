// Operator Overloading-- Unary operators
#include <iostream>
using namespace std;

class AB
{
    int a, b;

public:
    AB(int x, int y) //paramterzied constructor
    {
        a = x;
        b = y;
    }
    void operator++() //Pre increment overloading
    {
        ++a;
        ++b;
    }
    void operator++(int) //Post increment overloading
    {
        ++a;
        ++b;
    }
    void display()
    {
        cout << "Values of a and b are:  " << a<<" "<<b<< endl;
    }
};

int main()
{
    AB obj1(12, 13);
    obj1.display();
    ++obj1; //Preincrement ++a, ++b
    cout << "After Preincrementing... " << endl;
    obj1.display();
    obj1++; //Post incrementing a++, b++
    cout << "After Post-incrementing... " << endl;
    obj1.display();
}