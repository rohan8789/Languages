// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Reversed: ";
//     for (int i = n-1; i >= 0; --i)
//     {
//         cout<<arr[i];
//     }
    
//    return 0; 
// }


//using pointers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int *ptra = arr;
    for(int i = 0; i < n; i++){
        cin>> *(ptra + i);
    }
    cout<<"Reversed: ";
    for(int i = n - 1; i >= 0; --i){
        cout<<*(ptra + i)<<"\t";
    }
return 0;
}