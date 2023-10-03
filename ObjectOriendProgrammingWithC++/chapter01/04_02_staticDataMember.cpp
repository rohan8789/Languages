#include <iostream>
using namespace std;

class xyz
{
public:
    int x;
    static float y;
    void getdata(void)
    {
        cout << x<<endl;
        cout << y<<endl;
    }
};

float xyz::y;

int main(int argc, char const *argv[])
{
    xyz c;
   // c.x = 4;
   // c.getdata();
    //a1.count();
   // xyz::y = 5;
    c.y;
    c.getdata();
    return 0;
}
