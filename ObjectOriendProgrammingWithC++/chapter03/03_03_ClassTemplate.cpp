//default parameter
#include<bits/stdc++.h>
using namespace std;

template<class t1 = int, class t2 = float, class t3 = char>
class Default
{
    t1 x;
    t2 y;
    t3 z;
    public:
    Default(t1 a, t2 b, t3 c)
    {
        x=a; 
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"The value of a is: "<<x<<endl
            <<"The value of b is: "<<y<<endl
            <<"The value of c is: "<<z<<endl;
    }
};

int main()
{
    Default<>d1(3, 5.7, 'm');
    d1.display();

    //updating template
    cout<<endl;
    Default<float, char, char>d2(2.76, 'a', 'z');
    d2.display();
return 0;
}