#include<bits/stdc++.h>
using namespace std;

class Teacher
{
    string name;
    int age;
    string department;
    double salary;
    public:
    void setData()
    {
        cout<<"Enter Name: ";
        getline(cin>>ws, name);
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Department: ";
        getline(cin>>ws, department);
        cout<<"Enter Salary: ";
        cin>>salary;
        
    }

    void showData()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"Department is: "<<department<<endl;
        cout<<"Salary is: "<<fixed<<setprecision(2)<<salary<<endl;
    }
};

int main()
{
    cout<<endl<<endl;
    Teacher t1[3];
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        cout<<"Teacher ["<<i<<"]: "<<endl;
        t1[i].setData();
    }
    cout<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        cout<<"Teacher ["<<i<<"]: "<<endl;
        t1[i].showData();
    }
    cout<<endl<<endl;

return 0;
}