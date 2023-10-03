#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float arr[5], TotalSum = 0;
    cout<<endl
        <<endl;
    cout << "Enter marks for 5 subjects: " << endl;
    for (i = 1; i <= 5; i++)
    {
        cout<<"Enter Marks["<<i<<"]: ";
        cin >> arr[i];
        TotalSum += arr[i];
    }

    float avg = TotalSum / 5;
    cout << "Total Marks: " << TotalSum << endl;
    cout << "Avg marks: " << avg << endl;
    cout<<endl
        <<endl;
    return 0;
}