#include <iostream>
using namespace std;

class student
{
    int roll, age;

public:
    void setData(int r, int a)
    {
        roll = r;
        age = a;
    }
    void printData(void)
    {
        cout<<"Details !!"<<endl;
        cout << "Roll number is: " << roll << endl;
        cout << "Age is: " << age << endl;
    }
};

int main(int argc, char const *argv[])
{
    student s1;
    //s1.roll = 12; //cant access pvt number directly
    //s1.age = 24;
    s1.setData(12, 32);
    s1.printData();
    
    

    
    return 0;
}
