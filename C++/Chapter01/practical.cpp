// #include<bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   int a;
//   float b;
//   char ch;
//   double d;

//   cout << "size of int a is: " << sizeof(a) << endl;
//   cout << "size of floating point number b is: " << sizeof(b) << endl;
//   cout << "Size of Given Character ch is: " << sizeof(ch) << endl;
//   cout << "Size of double d is: " << sizeof(d) << endl;

//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n, i, sum = 0;
//     cout<<"Enter a Natural Number: ";
//     cin>>n;

//     for ( i = 0; i <= n; i++)
//     {
//         sum += i;
//     }

//     cout<<"Sum of n Natural Number is: "<<sum<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5], i, TotalSum = 0;
//     cout << "Enter marks for 5 subjects: "<<endl;
//     for ( i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//         TotalSum += arr[i];
//     }
//     cout << "Avg marks: " << TotalSum / 5 << endl;

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, first, last, digits, SwappedN, a, b;
//     cout << " Enter Any Number: ";
//     cin >> n;
//     if (n == 0)
//     {
//         cout << "Invalid Input" << endl;
//     }
//     else
//     {
//         digits = (int)log10(n);
//         first = n / pow(10, digits);
//         last = n % 10;
//         a = first * (pow(10, digits));
//         b = n % a;
//         n = b / 10;
//         SwappedN = last * (pow(10, digits)) + (n * 10 + first);
//         cout << "Number after swaping: " << SwappedN << endl;
//     }
// }

#include <iostream> 
using namespace std;

int main()

{

    int f = 0, s = 1, next, n, a[20], k = 0;
    ;

    cout << "Enter no of Terms:- ";
    cin >> n;

    cout << "the fibonacci series is: "<<endl;
    cout << f << " " << s;
    for (int i = 1; i <= n - 2; i++)

    {
        next = f + s;
        cout << " " << next;
        f = s;
        s = next;
        if (next - f > 1)
        {
            for (int j = f + 1; j < next; j++)
            {
                a[k] = j;
                k++;
            }
        }
    }

    cout <<endl<< "The Missing Terms are: "<<endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
