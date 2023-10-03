#include<bits/stdc++.h>
using namespace std;

class EmpByCu
{
    protected:
    string name;
    string code;
    public:
    void set(void)
    {
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter Code: ";
        getline(cin, code);
    }
    void get(void)
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Code is: "<<code<<endl;
    }
};

class Teacher : virtual protected EmpByCu
{
    protected:
    string subj;
    string publication;
    public:
    void setData(void)
    {
        set();
        cout<<"Enter Subject: ";
        getline(cin, subj);
        cout<<"Enter Publication: ";
        getline(cin, publication);
    }
    void getData(void)
    {
        get();
        cout<<"Subject is: "<<subj<<endl;
        cout<<"Publication is: "<<publication<<endl;
    }
};

class Officer : virtual protected EmpByCu
{
    protected:
    string grade;
    public:
    void setValue(void)
    {
        set();
        cout<<"Enter the grade of the officer: ";
        getline(cin, grade);
    }
    void getValue(void)
    {
        get();
        cout<<"Grade of the officer is: "<<grade<<endl;
    }
};

class Typist : protected Teacher, protected Officer
{
    protected:
    string speed;
    string Dwages;
    public:
    void setDetails(void)
    {
        set();
        cout<<"Enter Speed: ";
        getline(cin, speed);
        cout<<"Enter Dwages: ";
        getline(cin, Dwages);
    }
    void getdetails(void)
    {
        get();
        cout<<"Typing Speed is: "<<speed<<endl;
        cout<<"Daily wages is: "<<Dwages<<endl;
    }
};


int main()
{
    Teacher t1;
    Officer o1;
    Typist T1;
    int n;
    cout << "details of Teacher, Officer, Typist are given below: " << endl;
    cout << "Press 1 for Teacher: " << endl
         << "press 2 for Officer: " << endl
         << "press 3 for Typist: " << endl;
    cout << "Enter value of n(1 to 3): ";
    cin >> n;

    switch (n)
    {
    case 1:
        t1.setData();
        t1.getData();
        break;

    case 2:
        o1.setValue();
        o1.getValue();
        break;

    default:
        break;
    }


return 0;
}