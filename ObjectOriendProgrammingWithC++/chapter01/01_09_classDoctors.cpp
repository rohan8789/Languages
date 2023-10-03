//create class for doctors. create atleast three data members.
//create two objects of this class and [rint the value of each data members]
#include <iostream>
using namespace std;
class Doctor
{
    int exp;
    string name;
    void setname(string n) //pvt function
    {
        name = n;
        print(); //function call to pvt member function print
    }
public:
    void set(int e, string n) //public function
    {
        exp = e;
        setname(n); //function call to pvt member function setname
    }
private:
    void print()
    {
        cout << "**Details**" << endl;
        cout << "Name: " << name << endl;
        cout << "Exp: " << exp << endl;
    }
};

int main()
{
    Doctor d1; //d1 object
    d1.set(4, "Kushagra");
    cout << "Program successful!";
    return 0;
}