#include <iostream>
using namespace std;
class Student
{
public:
    int rollno, age;
};
Student create() //doesn't belong to Student class- non member function
{
    Student o1;
    o1.rollno = 30;
    o1.age = 25;
    return o1; //return the object
}

int main()
{
    Student s1;
    cout << "Roll no is: " << s1.rollno << endl;
    cout << "Age is: " << s1.age << endl<< endl;

    s1 = create(); //s1=o1
    cout << "Roll no is: " << s1.rollno << endl;
    cout << "Age is: " << s1.age << endl;
    return 0;
}