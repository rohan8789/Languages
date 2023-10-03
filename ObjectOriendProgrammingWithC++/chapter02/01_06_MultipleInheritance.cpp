//Using the concept and syntax of multiple inheritance
/*
details01-----
              -------employee
details02-----
*/
//example code
#include<bits/stdc++.h>
using namespace std;

class details01
{
    private:
    int salary;

    public:
    void setSalary(int);
    void getSalary();
};

void details01 :: setSalary(int s)
{
    salary = s;
}

void details01 :: getSalary()
{
    cout<<"Salary of the employee is: "<<salary<<endl;
}

class details02
{
    protected:
    int id;

    public:
    void setId(int x);
    void getId();
};

void details02 :: setId(int x)
{
    id = x;
}

void details02 :: getId()
{
    cout<<"Id of the employee is: "<<id<<endl;
}

class employee : public details01, public details02
{
    protected:
    string name;
    public:
    void setName(string s)
    {
        name = s;
    }
    void getName(void)
    {
        cout<<"Name of the employee is: "<<name<<endl;
    }
    void DisplayData(void);
};

void employee :: DisplayData(void)
{
    cout<<endl;
    getName();
    getId();
    getSalary();
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    employee e1;
    e1.setSalary(56000);
    e1.setId(3);
    e1.setName("Rohan Singh");
    e1.DisplayData();
    return 0;
}
