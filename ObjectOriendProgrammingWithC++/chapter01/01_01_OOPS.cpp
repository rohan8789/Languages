/*
We have structures then why do we need classes?
Structure can not help you in data hiding. data can be directly accessed 
through structures
*/
#include <bits/stdc++.h>
using namespace std;

class employee
{
    string name;
    long long number;

public:
    void access(string s, long long n)
    {
        name = s;
        number = n;
    }
    //protected :---- //protected data will be accessible to its friend classes and child classes
    //will be hidden to few portion of the program
    void getData()
    {
        cout<<endl;
        cout<<"Details !!"<<endl;
        cout<<"Enter your name: ";
        getline(cin, name);
        cout<<"Enter your Number: ";
        cin>>number;
        cout<<endl;
    }
    void putData()
    {

        cout<<"Name of the Employee is: "<<name<<endl;
        cout<<"Employee Number is: "<<number<<endl;
        cout<<endl;
    }
};


int main(int argc, char const *argv[])
{
    employee E1;
    E1.getData();
    E1.putData();

    return 0;
}
