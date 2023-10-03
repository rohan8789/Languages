#include <iostream>

using namespace std;

class Test
{
    int x;

public:
    Test() : x(0) {}
    Test(int a)
    {
        x = a;
    }
    void operator++()
    {
        --x;
    }
    void operator++(int)
    {
        x--;
    }
    void display()
    {
        cout << "The number is: " << x << endl;
    }
};

int main()
{
    Test obj1(3);
    ++obj1;
    obj1.display();
    obj1++;
    obj1.display();
    return 0;
}