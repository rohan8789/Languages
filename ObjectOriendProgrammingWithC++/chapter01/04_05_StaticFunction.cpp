//static function is a function which is allowed to access only and only static members
#include<bits/stdc++.h>
using namespace std;

class  employee
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
            cout<<"The id is "<<id<<" and the employee number is "<<count<<endl;
        }
        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

int employee::count; //default value is zero

int main(int argc, char const *argv[])
{
    //static function is called with name of the class
    //Non static function can be called by object of the class
    //non static function can access both static and nonstatic data members
    employee Rohan, Sameer, Rishu;
    Rohan.setData();
    Rohan.getData();
    employee::getCount();

    Sameer.setData();
    Sameer.getData();
    employee::getCount();

    Rishu.setData();
    Rishu.getData();
    employee::getCount();   
    return 0;
}
