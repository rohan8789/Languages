//with single parameter
#include<bits/stdc++.h>
using namespace std;

template<class T>
class Product
{
    public:
    T *arr;
    int size;
    Product(int s)
    {
        size = s;
        arr = new int[size];
    }
    int DotProduct(Product &v)
    {
        int d=0;
        for(int i=0; i<size; i++)
        {
            d = d + arr[i]*v.arr[i];
        }
        return d;
    }
};

int main()
{
    Product<int>p1(3);
    p1.arr[0] = 2;
    p1.arr[1] = 5;
    p1.arr[2] = 7;

    Product<int>p2(3);
    p2.arr[0] = 4;
    p2.arr[1] = 1;
    p2.arr[2] = 8;

    int x = p1.DotProduct(p2);
    cout<<x<<endl;
    
return 0;
}