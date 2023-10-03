#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
        void setid(void)
        {
            salary = 45000;
            cout<<"Enter the id of the employee: ";
            cin>>id;
        }
        void getid(void)
        {
            cout<<"The id of this employee is: "<<id<<endl;
        }
};

int main(int argc, char const *argv[])
{
    employee Rohan, sameer, shruti;
    // Rohan.setid();
    // Rohan.getid();
    /*
    what if we need to store record of 30000 employee, we will need array of object
    */
   employee company[3];
   for (int i = 0; i < 4; i++)
   {
       company[i].setid();
       company[i].getid();
   }
   

    return 0;
}
