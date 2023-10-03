//Multilevel inheritance deepdive
//Dada----->father------->you
//Student-->exam--->result

/*
If we are inheriting B from A and C from B then, 
  1. A is base for B and B is base for C.
  2. A-B-C is called inheritance path
*/
#include<bits/stdc++.h>
using namespace std;
class student
{
    protected:
    int Rollnum;
    public:
    void setRoll(int r);
    void getRoll(void);
};

void student :: setRoll(int r)
{
    Rollnum = r;
}

void student :: getRoll(void)
{
    cout<<Rollnum<<endl;
}

class exam : public student
{
    protected:
    float maths;
    float programming;

    public:
    void setMarks(float, float);
    void getMarks(void);
};

void exam :: setMarks(float x, float y)
{
    maths = x;
    programming = y;
}

void exam :: getMarks(void)
{
    cout<<"Maths marks: "<<maths<<endl;
    cout<<"Programming marks: "<<programming<<endl;
}

class Result : public exam
{
    public:
    void display(void);
};

void Result :: display(void)
{
    getRoll();
    getMarks();
    cout<<"Percentage scored is: "<<(maths+programming)/2.0<<endl;
}

int main(int argc, char const *argv[])
{
    Result Rohan;
    Rohan.setRoll(13);
    Rohan.setMarks(91.18, 95.75);
    Rohan.display();

    return 0;
}
