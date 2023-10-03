/*
1. Array is the list of the variable of similar type
eg:- {1,4,5,6,5} int array
     {'e', 'd','e'} char array
     {1,5,3,'f','w'} not an array


2. DataType arrayname[size];
3. contigous memory
4.indexing of array starts from 0. hence if there is a array of size n then element of array is n-1
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //int arr[] = {10, 20, 30, 40}; //initialising an array

    //user initialization
    int n, i, array[n];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the element of an array: ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
