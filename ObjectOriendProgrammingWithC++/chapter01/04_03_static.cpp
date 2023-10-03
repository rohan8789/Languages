// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class ABC
{
public:            //scope defined as public
    int roll, age; //declaration of non-static data member
    static int count; //declaration of static data member
};

int ABC::count = 10; //initialization of static data member
int main()
{
    ABC s1, s2; //creating objects
    s1.roll = 10; //roll number data member of object s1
    s1.age = 25; //age data member of object s1

    s2.roll = 12; //roll number data member of object s2
    s2.age = 30; //age data member of object s2

    cout << "**Details**" << endl;
    cout << "Roll is: " << s1.roll << endl;
    cout << "Age is: " << s1.age << endl;
    cout << "Count is: " << ABC::count << endl;
    cout << endl;
    cout << "**Details**" << endl;
    cout << "Roll is: " << s2.roll << endl;
    cout << "Age is: " << s2.age << endl;
    cout << "Count is: " << ABC::count << endl;
    return 0;
}