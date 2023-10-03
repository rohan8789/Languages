#include<bits/stdc++.h>
using namespace std;

class Calculater{
    public:
    void sumReal(Complex c1, Complex c2){
        return c1.a+c2.a;
    }
    void sumImg(Complex c1, Complex c2){
        return c1.b+c2.b;
    }
};
class Complex{
    int a,b;
    public:
    friend int Calculator :: sumReal(Complex, Complex);
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<a<<" +i"<<b<<endl;
    }
};


int main()
{
    Complex c1,c2;
    c1.setData(2,4);
    c2.setData(5,7);
    c1.print();
    c2.print();

    Calculater cal;
    cal.sumReal(c1,c2);
return 0;
}