// Constructor Overloading
/* Important Points:
  1. Name of the constructors is same as that of the class
  2. No return value
  3. Constructor definitions differ from each other in following ways:
    a. No. of arguments
    b. Type of arguments
    3. Order of arguments
*/

#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
public:
    //1
    Student() //default constructor--- zero arguments
    {
        rollno = 1;
        name = "ABC";
    }
    //2
    Student(int r) //one int argument
    {
        rollno = r;
        name = "DEF";
    }
    //3
    Student(string s) //one string argument
    {
        rollno = 0;
        name = s;
    }
    //4
    Student(int r, string s) //two arguments-- first one is int and second is string
    {
        rollno = r;
        name = s;
    }
    //5
    Student(string s, int r) //two arguments-- first one is string and second is int
    {
        rollno = r;
        name = s;
    }
    void display()
    {
        cout << "***Details***" << endl;
        cout << "Rollno is: " << rollno << endl;
        cout << "Name is: " << name << endl;
    }
};

int main()
{
    Student s1(56), s2, s3("Raman"), s4("Neha", 78), s5(45, "Riya");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}