// Same name, same return type for different classes is function overriding


#include <iostream>
using namespace std;

class Shape
{
    public:    
    void area()
    {}    
};

class Rectangle: public Shape
{
    public:
    int l,b;    
    void area()  //overriding the base class function
    {
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
};

class Square: public Shape
{
    public:
    int s;    
    void area()  //overriding the base class function
    {
        cout<<"Area of square is: "<<s*s<<endl;
    }
};

int main()
{
    Square obj1;
    obj1.s=5;
    obj1.area();
    
    Rectangle obj2;
    obj2.l=6;
    obj2.b=7;
    obj2.area();
    
}