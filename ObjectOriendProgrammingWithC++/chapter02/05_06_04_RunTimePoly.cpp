/* FUnction Overriding

1. Name, return type, arguments everything is same

2. Only difference is in functionality or body of the function

3. It is only available in case of inheritance



*/

#include <iostream>

using namespace std;

class Shape

{

public:
    void area()

    {

        cout << "This is area function of Shape class!" << endl;
    }

    void print()

    {

        cout << "This is a function of Base class!" << endl;
    }
};

class Circle : public Shape

{

    int r;

    const float PI = 3.14;

public:
    Circle(int x)

    {

        r = x;
    }

    void area() //function overriding

    {

        cout << "Area of circle is:  " << PI * r * r << endl;
    }
};

class Square : public Shape

{

    int side;

public:
    Square(int s)

    {

        side = s;
    }

    void area() //function overriding

    {

        cout << "Area of Sqaure is:  " << side * side << endl;
    }
};

class Rectangle : public Shape

{

    int l, b;

public:
    Rectangle(int x, int y)

    {

        l = x;

        b = y;
    }

    void area() //function overriding

    {

        cout << "Area of Rectangle is:  " << l * b << endl;
    }
};

int main()

{

    Circle c1(2); //object of derived class

    c1.area();

    c1.Shape::area();

    Rectangle r1(5, 6);

    r1.area(); //function of derived class

    r1.Shape::area();

    Square s1(4);

    s1.area(); //function of derived class

    s1.Shape::area();
}