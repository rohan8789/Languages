#include <bits/stdc++.h>
#include<cmath>
using namespace std;

class Ncal
{
protected:
    float a, b;

public:
    int n;
    void setData();
    void Information(void);
    void process(void);
};

void Ncal ::setData()
{
    cout << "Enter the value of a nd b: ";
    cin >> a >> b;
}

void Ncal ::process()
{
    cout<<"Enter the value of n(b/n 1-4):- ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout << "Sum of two num: " << a + b << endl;
        break;

    case 2:
        cout << "Subtration of two num: " << a - b << endl;
        break;

    case 3:
        cout << "Multiplication of two num: " << a * b << endl;
        break;

    case 4:
        cout << "division of two num: " << a / b << endl;
        break;
    default:
        cout << "Invalid Input: ";
        break;
    }
}

class Scal : public Ncal
{
protected:
    int p;

public:
    void SetData(void);
    void Process(void);
};

void Scal ::SetData(void)
{
    cout<<"Enter the value of p: ";
    cin>>p;
}

void Scal ::Process(void)
{
    cout<<"Enter the Value of n(b/n 1 - 4): ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout << "sin(p) =" << sin(a) << endl;
        break;

    case 2:
        cout << "cos(p) =" << cos(a) << endl;
        break;

    case 3:
        cout << "tan(p) =" << tan(a) << endl;
        break;

    case 4:
        cout << "Square Root(p) =" << sqrt(a) << endl;
        break;

    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    Ncal n1;
    Scal x1;
    int x;
    cout << "Press 1 for Normal Calculator and 2 for scientific calculator: " << endl;
    cin>>x;
    if (x == 1)
    {
        n1.setData();
        n1.process();
    }

    else if(x == 2)
    {
        x1.SetData();
        x1.Process();
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}
