#include <bits/stdc++.h>
using namespace std;
class Employee
{
    
public:
    int id;
    float salary;
    Employee(int i)
    {
        id = i;
        salary = 3400.00;
    }
    Employee(){};
};
/*
1. Derived Class syntax
   class {{Derived_class_name}} : {{visibility Mode}} base_class_name
   {
       class member/method/etc.
   }

   NOTE:-
   1. default visibility mode is private.
   2. Public visibility mode:-
      public members of the class becomes the public member of the derived class.
   3. private visibility mode:-
      public members of base class becomes private member of the derived class
   4. You cannot inherited private members of the base class.
*/
class programmer : private Employee
{
public:
    int languageCode;
    programmer(int inp)
    {
        id = inp;
        languageCode = 9;
    }

    void getData(void)
    {
        cout << id << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee Rohan(1), sameer(2);
    //e1.display();
    cout << Rohan.salary << endl;
    cout << sameer.salary << endl;

    programmer p1(10);
    cout << p1.languageCode << endl;
    // cout << p1.id << endl;
    p1.getData();

    return 0;
}
