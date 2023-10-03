#include<bits/stdc++.h>
using namespace std;

class student
{
public:
int age, roll;
static int count;
void printdata(void)
{
    cout<<"Age is: "<<age<<endl;
    cout<<"Roll is: "<<roll<<endl;
    cout<<"Count is: "<<count<<endl;

}
};

int student::count = 10;

int main(int argc, char const *argv[])
{
    student s1, s2, s3, s4;
    s1.age = 20;
    s1.roll = 3;
    s1.printdata();

    s2.age = 22;
    s2.roll = 4;
    s2.printdata();

    s4.age = 22;
    s4.roll = 4;
    s4.printdata();

    s3.age = 22;
    s3.roll = 4;
    s3.printdata();

    // student::count++;   //increment by 1
    //for increment number by x
    student::count = student::count + 4;
    cout<<"After Updating th data: ";
    s1.printdata();
    s2.printdata();
    s3.printdata();
    s4.printdata();

    return 0;
}
