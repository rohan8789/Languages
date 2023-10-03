// Dynamic Memory Allocation of array of n elements
#include <iostream>
using namespace std;

int main() {
    int n;
   cout<<"Enter the no. of students: ";
   cin>>n;
   
   int *marks=new int[n]; //allocate the memory for array of n students
   
   for(int i=0;i<n;i++)
   {
     cout<<"Enter the marks of student "<<i+1<<": ";
     cin>>marks[i];
   }
   
   cout<<"Marks of "<<n<<" students are: "<<endl;
   for(int i=0;i<n;i++)
   {
     cout<<marks[i]<<endl;
   }
   
   
   delete[] marks;  //deallocation of memory assigned to array
   cout<<"Array deleted!"<<endl;
   
   for(int i=0;i<n;i++)
   {
     cout<<marks[i]<<endl;
   }

    return 0;
}