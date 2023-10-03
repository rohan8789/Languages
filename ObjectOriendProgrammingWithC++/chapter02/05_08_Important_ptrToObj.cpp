//WAP to access members  using pointer to object members
#include <iostream>
using namespace std;
class Doctor
{
  string name;
  public:
  int age;
  void assign(string s)
  {
    name=s;
  }
  void print()
  {
    cout<<"Doctor name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
  }
};

int main()
{
  Doctor d1;
  d1.age=60;
  d1.assign("Tarun");
  d1.print();

  Doctor *dptr;
  dptr=&d1;
 // OR 

 // dptr= new Doctor;

 dptr->age=30;
 dptr->assign("Garima");
 dptr->print();
 return 0;

}