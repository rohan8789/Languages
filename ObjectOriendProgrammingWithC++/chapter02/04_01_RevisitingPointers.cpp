#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4;
    int* ptr;
    ptr = &a;
    cout<<"Value of a: "<<*(ptr)<<endl;
    float x=23.13;
    
    //keyword new
    //dynamic keyword
    int* p = new int(49);
    float* q = new float(54.594);
    //delete p;
    cout<<"The Value at p is: "<<*p<<endl;
    cout<<"The Value of q is: "<<*q<<endl;
    int* arr = new int[4];
    arr[0] = 12;
    arr[1] = 14;
    *(arr + 2) = 16;
    // delete arr
    //delete[] arr; //to delete complete contigious memory
    cout<<endl;
    cout<<"THe value og arr[0] is: "<<arr[0]<<endl;
    cout<<"THe value og arr[1] is: "<<arr[1]<<endl;
    cout<<"THe value og arr[2] is: "<<arr[2]<<endl;
    cout<<endl<<endl;
    delete arr;

    //delete Operator
    //New and delete are operator and keyword both

return 0;
}