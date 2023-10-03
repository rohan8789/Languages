#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //What is a pointer-----> a pointer is a data type which stores the address of the variable
    int a = 4;
    int* b = &a;
    //& is the 'adrress of' the operator
    cout<<"Address of a is "<<b<<endl;
    cout<<"Adress of a is "<<&a<<endl;

    //* ----->'Value at' dereference operator
    cout<<"Value of adress b is: "<<*&a<<endl;
    cout<<"Value at address b is: "<<*b<<endl;

    //Pointer to a pointer
    int **c = &b;
    cout<<"Address of b is: "<<&b<<endl;
    cout<<"Address of b is: "<<c<<endl;
    cout<<"address of c is: "<<*c<<endl;
    cout<<"'Value at' address value_at(Value_at(c)) is: "<<**c<<endl;
    return 0;
}
