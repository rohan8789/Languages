#include<iostream>
using namespace std;

class polynomial
{
    int x, y;
    public:
    polynomial(){

    }
    polynomial(int a, int b)
    {
        x = a; 
        y = b;
    }
    polynomial sumpolynomial(polynomial p1, polynomial p2)
    {
        polynomial p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;
    }

    void Show(void)
    {
        cout<<"polynomial is: "<<x<<"x +"<<y<<"y"<<endl;
    }
};

int main()
{
    polynomial z1(3, 4), z2(5, 6), z3;
    cout<<endl<<endl;
    z1.Show();
    z2.Show();
    z3 = z3.sumpolynomial(z1, z2);
    z3.Show();
    cout<<endl;
return 0;
}