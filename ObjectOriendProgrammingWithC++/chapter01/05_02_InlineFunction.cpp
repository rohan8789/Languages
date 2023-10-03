//find largest and smallest of three numbers using inline function
#include <bits/stdc++.h>
using namespace std;

inline int MAX(int p, int q, int r)
{
    int max;
    if (p >= q && p >= r)
    {
        max = p;
    }
    else if (q >= r)
    {
        max = q;
    }
    else
    {
        max = r;
    }
    return max;
}
inline int MIN(int x, int y, int z)
{
    int min;
    if (x <= y && x <= z)
    {
        min = x;
    }
    else if (y <= z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    return min;
}

int main(int argc, char const *argv[])
{
   int a, b, c;
   cout<<endl<<"Enter the value of a, b and c: ";
   cin>>a>>b>>c;

   cout<<"Maximum is: "<<MAX(a, b, c)<<endl;
   cout<<"Minimum is: "<<MIN(a, b, c)<<endl<<endl;
    return 0;
}
