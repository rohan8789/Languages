//with multiple parameter

#include<bits/stdc++.h>
using namespace std;

template<class T, class Q>
class Vector
{
    public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T [size];
    }
    T DotProduct(Vector &v)
    {
        float d = 0;
        for(int i = 0; i< size; i++)
        {
            d = d + arr[i]*v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<float, int>v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    v1.arr[2] = 2;

    Vector<float, int>v2(3);
    v2.arr[0] = 2.1;
    v2.arr[1] = 3.7;
    v2.arr[2] = 4.8;

    float x = v1.DotProduct(v2);
    cout<<x<<endl;



    /*
    Vector v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 2;
    v1.arr[2] = 7;

    Vector v2(3);
    v2.arr[0] = 7;
    v2.arr[1] = 5;
    v2.arr[2] = 2;

    int x = v1.DotProduct(v2);
    cout<<x;
    //What if i need same data in float char or double Type
    //it will not be a smart way to make different class for different data types
    //Alternative Approact===> class template
    */
    return 0;
}