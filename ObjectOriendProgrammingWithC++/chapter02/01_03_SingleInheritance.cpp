//Basic example
#include <bits/stdc++.h>
using namespace std;

class base
{

    int data1;
public:
    int data2;
    void setData(int);
    int getData1();
    int getData2();
};

void base ::setData(int x)
{
    data1 = x;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : public base
{

public:
    int Data3;
    void process();
    void display();
};

void derived ::process(void)
{
    // setData(12); // when set visibility as private
    Data3 = data2 * getData1();
}

void derived ::display()
{
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data02 is: " << data2 << endl;
    cout << "Value od data3 is: " << Data3 << endl;
}

int main(int argc, char const *argv[])
{
    derived der;
    der.setData(10);//when inherited using pvt visibility mode, throws error, rule of visibiltiy
    der.process();
    der.display();
    return 0;
}
