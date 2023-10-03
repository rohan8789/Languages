/*
Function Overloading:
Function having same name and same return type.
Difference is:
1. No. of arguments
2. Type of arguments
3. Order of arguments

*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollno, age;
    string name;

    void assign() //zero argument
    {
        rollno = 12;
        age = 30;
        name = "Hitesh";
    }
    void assign(int a) //one integer argument
    {
        rollno = 13;
        age = a;
        name = "Ramesh";
    }

    void assign(int a, int b) //two integer arguments
    {
        rollno = a;
        age = b;
        name = "Sahil";
    }
    void assign(string s) //one string argument
    {
        rollno = 12;
        age = 30;
        name = s;
    }

    void assign(int a, int b, string s1)
    {
        rollno = a;
        age = b;
        name = s1;
    }

    void assign(string s1, int a, int b)
    {
        rollno = a;
        age = b;
        name = s1;
    }

    void display()
    {
        cout << "Rollno is:  " << rollno << endl;
        cout << "Age is:  " << age << endl;
        cout << "Name is:  " << name << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    s1.assign(67);
    s1.display();
    s1.assign(23, 45, "Raman");
    s1.display();
    s1.assign("Riyaa", 30, 67);
    s1.display();
}