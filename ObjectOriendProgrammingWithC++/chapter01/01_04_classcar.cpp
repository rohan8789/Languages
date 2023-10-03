#include <bits/stdc++.h>
using namespace std;

class car
{
   

public:
    string name;
    string colour;
    long long model;
    int weight;

public:
    void setdata(void)
    {
        cout << "Enter car name: ";
        cin >> name;
        cout << "Enter colour: ";
        cin >> colour;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter eight: ";
        cin >> weight;
    }
    void getData(void)
    {
        cout<<"car name: "<<name<<endl;
        cout<<"Colour: "<<colour<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"weight: "<<weight<<endl;
    }
};

int main(int argc, char const *argv[])
{
    car c1;
    c1.setdata();
    c1.getData();

    return 0;
}
