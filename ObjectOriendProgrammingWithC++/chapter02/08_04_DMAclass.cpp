// Dynamic Memory Allocation to array of Objects
#include <iostream>
using namespace std;

class Student
{
    public:
    Student()
    {
        cout<<"Constructor Called!"<<endl;
    }
    ~Student()
    {
        cout<<"Destructor Called!"<<endl;
    }
};
int main() 

{
    Student obj1;  //allocate memory to one object
    int n;
    cout<<"Enter the no. of objects: ";
    cin>>n;
    
    
    
    Student *sptr;
    sptr=new Student[n]; // allocate the memory to n number of objects
    //Student *sptr=new Student;
   
   cout<<"Objects created sucessfully!"<<endl<<endl;
   
   //delete obj1;
   delete[] sptr; //deallocate the memory from all objects
   
    cout<<"Objects deleted sucessfully!"<<endl;
   
   
    return 0;
}