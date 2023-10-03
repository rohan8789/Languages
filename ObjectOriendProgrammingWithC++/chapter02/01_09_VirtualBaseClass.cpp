/*
1. hybrid structure
           ------>sports
Student---->            -----> Result
           ------>exams
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void setRoll(int r)
    {
        rollno = r;
    }
    void getRoll(void)
    {
        cout << "Your Roll number is: " << rollno << endl;
    }
};

class Exam : virtual public Student
{
protected:
    float maths, programming;

public:
    void setMarks(float x, float y)
    {
        maths = x;
        programming = y;
    }

    void getMarks(void)
    {
        cout << "Marks obtained in maths is: " << maths << endl
             << "marks obtained in programming is: " << programming << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float pT;
    public:
    void setScore(float z)
    {
        pT = z;
    }

    void getScore(void)
    {
        cout << "Score in physical Education is: " << pT << endl;
    }
};

class Result : public Exam, public Sports
{
protected:
    float Total;

public:
    void display(void)
    {
        Total = maths + programming + pT;
        getRoll();
        getMarks();
        getScore();
        cout << "Total marks obtained is: " << Total << endl;
    }
};

int main()
{
    Result r1;
    r1.setRoll(12);
    r1.setMarks(93.71, 91.45);
    r1.setScore(96.11);
    r1.display();
    return 0;
}
