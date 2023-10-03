#include<bits/stdc++.h>
using namespace std;

template<class t1, class t2>
double avg(t1 *x, t2 *y)
{
    double avg = (*x + *y)/2.0;
    return avg;
}

template<class r1, class r2>
void swap(r1 *m, r2 *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    int a;
    int b;
    cin>>a>>b;
    double z = avg(&a, &b);
    cout<<z<<endl;

    swap(&a, &b);
    cout<<"Value of a is: "<<a<<endl
        <<"Value of b is: "<<b<<endl;
    

return 0;
}