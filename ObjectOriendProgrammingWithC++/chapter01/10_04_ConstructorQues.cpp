// //constructor wap to take two points and compute distance b/n them
// #include<bits/stdc++.h>
// using namespace std;

// class point
// {
//     int x, y;
//     public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     friend int distance(point p, point q);
//     void display(void)
//     {
//         cout<<"("<<x<<","<<y<<")"<<endl;
//     }
// };

// int distance(point p, point q)
//     {
//         int z = sqrt(pow((q.x - p.x), 2)) + sqrt(pow((q.y - p.y), 2));
//         return z;
//     }

// int main(int argc, char const *argv[])
// {
//     point a(10, 10);
//     a.display();
//     point b(1, 0);
//     b.display();

//     int c = distance(a, b);
//     cout<<c;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Data
{
    string name;
    int roll;
    int height;
    int weight;

public:
    Data(string n, int r, int h, int w)
    {
        cout<<endl;
        cout<<"Constructor called"<<endl;
        name = n;
        roll = r;
        height = h;
        weight = w;
        cout<<endl;
    }

    ~Data()
    {
        cout<<"Destructor called"<<endl;
    }

    void Display(void)
    {
        cout<<"Students Details !!";
        cout << endl;
        cout << "Your Name is: " << name << endl;
        cout << "Your Roll is: " << roll << endl;
        cout << "Your height is: " << height << " cm" << endl;
        cout << "Your weight is: " << weight << " kg" << endl;
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Data d1("Rohan Singh", 22, 172, 62);
    Data d2(d1);
    d2.Display();
    return 0;
}
