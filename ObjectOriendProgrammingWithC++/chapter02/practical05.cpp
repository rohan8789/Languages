#include<bits/stdc++.h>
using namespace std;

class teacher
{
    string name;
    string sub;
    float basic, DA, HRA, salary;
    int calculate(){
        salary = basic+DA+HRA;
        return salary;
    }
    public:
    void Readdata(){
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter sub: ";
        getline(cin, sub);
        cout<<"Enter Basic: ";
        cin>>basic;
        cout<<"Enter HRA: ";
        cin>>HRA;
        cout<<"Enter DA: ";
        cin>>DA;
        calculate();
    }
    void DisplayData(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Subject is: "<<sub<<endl;
        cout<<"Basic is: "<<basic<<endl;
        cout<<"HRA is: "<<HRA<<endl;
        cout<<"DA is: "<<DA<<endl;
        cout<<"Salary is: "<<salary<<endl;
    }

};

int main()
{
    teacher t;
    cout<<endl<<endl;
    t.Readdata();
    cout<<endl;
    t.DisplayData();
    cout<<endl<<endl;
return 0;
}