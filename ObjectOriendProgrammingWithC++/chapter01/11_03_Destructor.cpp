// similar to constructor with a symbol ~
//~student(){}
#include <iostream>
using namespace std;
class Student
{
    int rollno, age;
public:
    Student() //default constructor
    {
        cout << "Constructor called" << endl;
        rollno = 10;
        age = 10;
    }
    Student(int r, int a) //paramterized-- with 2 arguments/parameter
    {
        cout << "Constructor1 called" << endl;
        rollno = r;
        age = a;
    }
    Student(int r) //paramterized-- with 1 arguments/parameter
    {
        cout << "Constructor2 called" << endl;
        rollno = r;
        age = 42;
    }

    void display()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }

    ~Student() //destructor-- to release memory assigned to objects
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s1, s2(25, 40), s3(20), s4, s5; //main function is the scope of these objects
    int x = 1;
    if (x) //true
    {
        Student s6; //constructor
    } //destructor for s6 will get called
    s1.display();
    s2.display();
    s3.display();
} //end of the scope