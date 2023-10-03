#include <iostream>

using namespace std;

class Person

{

  string name;

  int age;

   

  public:

  Person(int age, string name)

  {

    this->age=age;

    this->name=name;

  }

   

  Person operator > (Person p1) 

  {

    if(this->age > p1.age)

    {

      return *this;

    }

    else

    return p1;

  }

   

  void result()

  {

    cout<<name<<" is eldest"<<endl;

  }

   

};



int main() {

  Person obj1(23,"Kiran"), obj2(36,"Mrinal");

  

  (obj1>obj2).result(); // --->> obj1.result() OR obj2.result()



  return 0;

}
