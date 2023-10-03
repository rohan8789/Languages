//when you set static variable then, it becomes the property of count when we remove the word static, 
//we need to set count = 0, i.e, variable = 0 which is limited to one object only, lrts say, employee
//Only one memory is allocated to
//static data member is also called as class variable
//no static data members are called as instance variable or obj variable


#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    static int count;
    
    public:
        void setData(void){
            cout<<"Enter the id: ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id is: "<<id<<" and this is employee number"<<count<<endl;
        }
};

int employee:: count; //default value zero

int main(int argc, char const *argv[])
{
    employee Rohan, harry, sameer;
    //rohan.id = 33
    //rohan.count = 1 // cannot print as id anda count is pvt.
    Rohan.setData();
    Rohan.getData();

    harry.setData();
    harry.getData();

    sameer.setData();
    sameer.getData();

    return 0;
}
