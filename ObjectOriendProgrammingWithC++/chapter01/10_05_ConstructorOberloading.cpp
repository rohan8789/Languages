//WAP to find area of rectangle using constructor overloading.
//Also define destructor to delete the memory allocated to objects.

#include <bits/stdc++.h>
using namespace std;

class AreaofRect
{
    int l, b;

public:
    AreaofRect(int x, int y)
    {
        l = x;
        b = y;
        cout << "Constructor_01 Called" << endl;
    }

    AreaofRect(int x)
    {
        l = x;
        b = 10;
        cout << "Constructor_02 Called" << endl;
    }

    AreaofRect()
    {
        l = 20;
        b = 20;
        cout << "Constructor_03 Called" << endl;
    }

    ~AreaofRect()
    {
        cout<<"Destructor called"<<endl;
    }

    int Area(void)
    {
        return l * b;
    }

};

int main(int argc, char const *argv[])
{
    AreaofRect a1(13, 21), a2(12), a3, a4(6, 9);
    cout<<endl;
    cout<<"Area of Rectangle_01 is: "<<a1.Area()<<endl;
    cout<<"Area of Rectangle_02 is: "<<a2.Area()<<endl;
    cout<<"Area of Rectangle 03 is: "<<a3.Area()<<endl;
    cout<<"Area of Rectangle 04 is: "<<a4.Area()<<endl;
    cout<<endl;

    return 0;
}
