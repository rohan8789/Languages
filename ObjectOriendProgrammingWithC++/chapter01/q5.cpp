#include <bits/stdc++.h>
using namespace std;

class car
{
    public:
    string company;
    string model;

public:
    car()
    {
        cout << "Enter the name of the company: ";
        getline(cin >> ws, company);
        cout << "Enter Model Number: ";
        getline(cin >> ws, model);
    }
    ~car()
    {
        cout << "destructor called" << endl;
    }
    
    void show()
    {
        cout << "Company of the car is: " << company << endl;
        cout << "Model name of the car is: " << model << endl;
    }
};

int main()
{
    cout << endl
         << endl;
    int n;
    cin >> n;
    car *c = new car[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        c[i].show();
    }
    delete[] c;
    cout << "Deleted" << endl
         << endl;
    ;
    return 0;
}