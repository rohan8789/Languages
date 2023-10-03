/*
Create a class called employee with the following details as 
variables within it. 
1. Name of the employee (string) 
2. Age (int) 
3. Designation (string) 
4. Salary (double) 
Write a program to create array of objects 
for the same to access these. Also, make 
use of member functions to accept values 
and print the name, age, designation and salary.
*/
#include<bits/stdc++.h>
using namespace std;

class employee
{
    string name;
    int age;
    string dest;
    double salary;
    public:
    void setdetails()
    {
        cout<<"Enter name: ";
        getline(cin>>ws, name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter destination: ";
        getline(cin>>ws, dest);
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void printdetails()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"Destination is: "<<dest<<endl;
        cout<<"Enter Salary: "<<fixed<<setprecision(2)<<salary<<endl;
    }
};

int main()
{
    employee ep[3];
    cout<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        ep[i].setdetails();
    }

    cout<<endl;
    for(int i=0; i<3; i++)
    {
        ep[i].printdetails();
    }
    cout<<endl<<endl;
return 0;
}