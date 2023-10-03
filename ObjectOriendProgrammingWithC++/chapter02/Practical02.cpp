/*

Write a program that takes information about institute staff information for
 1) Teacher code, name, subject and publication 2) Officer code, name and 
 grade 3) Typist code, name, speed and daily wages and displays it using 
 multiple inheritance.
 
 */
#include<bits/stdc++.h>
using namespace std;

class EmpByCu
{
protected:
    string code;
    string name;

public:
    void set(void)
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Code: ";
        getline(cin, code);
    }
    void get(void)
    {
        cout << "Name is: " << name << endl;
        cout << "Code is: " << code << endl;
    }
};

class Teacher : virtual protected EmpByCu
{
protected:
    string subject;
    string publication;

public:
    void setData(void)
    {
        cout << endl;
        cout << "---------TEACHER DETAILS-------------" << endl;
        cout << endl;
        set();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Publication: ";
        getline(cin, publication);
    }

    void getData(void)
    {
        cout << endl;
        get();
        cout << "Subject Name is: " << subject << endl;
        cout << "Publication is: " << publication << endl;
        cout << endl;
    }
};

class Officer : virtual protected EmpByCu
{
protected:
    string grade;

public:
    void setValues()
    {
        cout << endl;
        cout << "-----------OFFICER'S DETAILS-----------" << endl;
        cout << endl;
        set();
        cout << "Enter the grade of the officer: ";
        getline(cin, grade);
    }
    void getValues(void)
    {
        cout << endl
             << endl;
        get();
        cout << "Grade of the officer is: " << grade << endl;
        cout << endl;
    }
};

class Typist : protected Teacher, protected Officer
{
protected:
    string speed;
    int Dwages;

public:
    void setDetails()
    {
        cout << endl;
        cout << "---------TYPIST DETAILS------------" << endl;
        cout << endl;
        set();
        cout << "Enter typing speed: ";
        getline(cin, speed);
        cout << "Enter Daily wages: ";
        cin >> Dwages;
    }

    void getDetails(void)
    {
        cout << endl;
        get();
        cout << "Typing Speed: " << speed << endl;
        cout << "Typist Daily wages: " << Dwages << endl;
        cout << endl
             << endl;
    }
    void DisplayEverything(void)
    {
        setData();
        getData();
        setValues();
        getValues();
        setDetails();
        getDetails();
    }
};

int main()
{
    Typist t1;
    t1.DisplayEverything();
    return 0;
}
