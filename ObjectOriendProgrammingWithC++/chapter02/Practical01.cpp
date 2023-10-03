#include<bits/stdc++.h>
using namespace std;

class Student
{
    protected:
    string uid;
    public:
    void getnumber(void)
    {
        cout<<endl<<endl;
        cout<<"Enter UID to see your Marks and Percentage Obtained: ";
        cin>>uid;
    }

    void putnumber(void)
    {
        cout<<"Your UID is: "<<uid<<endl;
    }
};

class test : virtual protected Student
{
    protected:
    float cpp, maths, Eng, hindi;
    public:
    void getmarks(float c, float m, float e, float h)
    {
        cpp = c;
        maths = m;
        Eng = e;
        hindi = h;
    }
    void putmarks(void)
    {
        cout<<endl<<endl;
        cout<<"Marks in Cpp: "<<cpp<<endl
            <<"marks in Maths: "<<maths<<endl
            <<"Marks in Eng: "<<Eng<<endl
            <<"Marks in Hindi: "<<hindi<<endl;
        cout<<endl;
    }
};

class sports : virtual protected Student
{
    protected:
    float sports;
    public:
    void getScore(float s)
    {
        sports = s;
    }
    void putScore(void)
    {
        cout<<endl;
        cout<<"Marks in Sports is: "<<sports<<endl;
        cout<<endl;
    }
};

class result : public test, public sports
{
    public:
    float Total;
    float perc;
    void Display(void)
    {
        getnumber();
        putnumber();
        getmarks(97.32, 94.42, 95.92, 91.56);
        putmarks();
        getScore(98.18);
        putScore();
        Total = cpp + maths + Eng + hindi + sports;
        perc = Total/5.0;
        cout<<endl;
        cout<<"Total Marks Obtained: "<<Total<<endl;
        cout<<"Percentage Obtained: "<<perc<<"%"<<endl;
        cout<<endl;
    }
};

int main()
{
    result r1;
    r1.Display();
    
return 0;
}