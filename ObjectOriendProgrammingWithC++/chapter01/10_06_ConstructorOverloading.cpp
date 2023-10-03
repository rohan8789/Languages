/*
Constructor Overloading:
Multiple definitions of constructors are available. They differ in no of arguments, type of arguments and order of arguments.

Constructor-
it is like a member function having same name as that of the class.

It is used to assign memory and initiaze the data memebers.

it doesn't have a return type

*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollno, age;
    string name;

    Student() //zero argument
    {
        rollno = 12;
        age = 45;
        name = "ABC";
    }

    Student(int a) //one int argument
    {
        rollno = a;
        age = 30;
        name = "Hitesh";
    }
    Student(int a, int b) //two int args
    {
        rollno = a;
        age = b;
        name = "Ritesh";
    }
    Student(string s1, int a, int b) //one string and two int args
    {
        rollno = a;
        age = b;
        name = s1;
    }
    Student(int a, int b, string s1) //two int args and one string arg
    {
        rollno = a;
        age = b;
        name = s1;
    }
    void display()
    {
        cout << "Values assigned" << endl;
    }
};

int main()
{
    Student s1, s2(34, 45), s3("Hitesh", 12, 34);
    s1.display();
    s2.display();
    s3.display();
}