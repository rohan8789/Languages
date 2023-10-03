// Dynamic Memory Allocation of array of characters
#include <iostream>
using namespace std;

int main() {
    int n;
   cout<<"Enter the no. of characters: ";
   cin>>n;
   
   char *ptr;
   ptr=new char[n];
   
   for(int i=0;i<n;i++)
   {
      cout<<"Enter the character "<<i+1<<": ";
      cin>>ptr[i];
   }
   cout<<endl;
   
   cout<<"Name entered is: ";
   for(int i=0;i<n;i++)
   {
      cout<<ptr[i];
   }
   
delete[] ptr;  //deallocating the memory at runtime

cout<<endl<<"After deleting: "<<endl;

  for(int i=0;i<n;i++)
   {
      cout<<ptr[i];
   }
    return 0;
}