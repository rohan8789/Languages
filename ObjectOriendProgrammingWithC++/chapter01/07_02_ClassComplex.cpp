//Add two complex number
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int r, j;

public:
    Complex() {}
    Complex(int x, int y)
    {
        r = x;
        j = y;
    }

    Complex SumComplex(Complex o1, Complex o2)
    {
        Complex o3;
        o3.r = o1.r + o2.r;
        o3.j = o1.j + o2.j;
        return o3;
    }

    void getData01(void)
    {
        cout << endl
             << endl;
        cout << "Given complex number 01 is: " << r << "+" << j << "i" << endl;
    }

    void getData02(void)
    {
        cout << "Given complex number 02 is: " << r << "+" << j << "i" << endl;
    }

    void Display()
    {

        cout << "Sum of the complex num is: " << r << "+" << j << "i" << endl;
        cout << endl
             << endl;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1(10, 6), c2(7, 8), c3;
    c1.getData01();
    c2.getData02();

    c3.SumComplex(c1, c2);
    c3.Display();

    return 0;
}
