#include <iostream>
using namespace std;

class demo
{
    int x, y;

public:
    demo(int a, int b)
    {
        x = a;
        y = b;
        cout<<"Constructor call";
    }
};

int main(int argc, char const *argv[])
{
    demo d1();
    demo d2(3, 4);
    demo d3(d2);

    return 0;
}
