//create a class declare 3 private member, 2 function ie, one pvt, one public 1 to assign value. create 3 object
#include <iostream>
using namespace std;

class patient
{
    string name;
    int age;
    long long contact;

    void accessData(string n, int a, long long c)
    {
        name = n;
        age = a;
        contact = c;
    }

public:
    
    void display();
    void accessfun(string x, int y, long long z)
    {
        accessData(x, y, z);
    }
};

void patient::display(void)
{
    cout << "Patient Information !!" << endl;
    cout << "Name is: " << name << endl;
    cout << "Age is: " << age << endl;
    cout << "Contact is: " << contact << endl;
    cout << "Thankyou !" << endl;
}

int main(int argc, char const *argv[])
{
    patient p1;
    p1.accessfun("ROhan singh", 20, 9430648818);
    p1.display();
    return 0;
}
