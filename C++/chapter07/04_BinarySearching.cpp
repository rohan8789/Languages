#include <iostream>
using namespace std;


int search(int n, int arr[], int ToSearch)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == ToSearch)
        {
            return mid;
        }
        else if (arr[mid > ToSearch])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n, arr[n], i, ToSearch;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> ToSearch;
    return 0;
}
