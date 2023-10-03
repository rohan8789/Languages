#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;
    float arr[n], avg, sum = 0, highest, lowest;
    int i;

    for (i=1; i<=n; i++)
    {
        cout<<"Marks of student 0" << i << " is: ";
        cin>>arr[i];
        sum += arr[i];
        avg = sum / n;
    }

    highest = arr[1];
    lowest = arr[1];

    for (i=1; i<=n; i++)
    {
        if (highest <= arr[i])
        {
            highest = arr[i];
        }
        else
        {
            if (lowest > arr[i])
            {
                lowest=arr[i];
            }
        }
    }

    cout << endl
         << endl;
    cout << "Total Marks: " << sum << endl;
    cout << "Average of marks obtained is: " << avg << endl;
    cout << "Highest Marks Obtained is: " << highest << endl;
    cout << "Lowest Marks obtained is: " << lowest << endl;
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        cout << "Difference of student 0"<<i<<" Marks from avg is : "<<avg-arr[i]<<endl;
    }

    return 0;
}