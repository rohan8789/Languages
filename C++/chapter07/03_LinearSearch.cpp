#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[n], i, ToSearch;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched in the array: ";
    cin >> ToSearch;

    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == ToSearch)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        cout<<ToSearch<<" found at the place "<<i++<<endl;
    }
    

    return 0;
}
