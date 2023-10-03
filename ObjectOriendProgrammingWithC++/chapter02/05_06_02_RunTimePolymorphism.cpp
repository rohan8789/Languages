//virtualFunction
#include<bits/stdc++.h>
using namespace std;

class student
{
    protected:
    string name;
    string sec;
    public:
    student(string n, string s)
    {
        name = n;
        sec = s;
    }
    virtual void display(){};
};

class cppmarks : public student
{
    int cpp;
    public:
    cppmarks(string n, string s, int c) : student(name, sec)
    {
        cpp = c;
    }

    void display()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"sec is: "<<sec<<endl;
        cout<<"Marks in cpp is: "<<cpp<<endl;
    }
};

class mathsmarks : public student
{
    int maths;
    public:
    mathsmarks(string n, string s, int m) : student(name, sec)
    {
        maths = m;
    }
    void display()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Sec is: "<<sec<<endl;
        cout<<"Marks in maths is: "<<maths<<endl;
    }
};


int main()
{
    string name;
    string sec;
    int maths;
    int cpp;

    name = "Rohan Singh";
    sec = "18/c";
    cpp = 98;
    cppmarks c1(name, sec, cpp);
    

    name = "Rahul kumar";
    sec = "!8/c";
    maths = 98;
    mathsmarks m1(name, sec, maths);
    
    student* s[2];
    s[0] = &c1;
    s[1] = &m1;

    s[0]->display();
    s[1]->display();

return 0;
}