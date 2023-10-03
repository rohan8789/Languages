#include <bits/stdc++.h>
using namespace std;

class PriceList
{
   int a, b, c, d, e;

public:
   void access(int p, int q, int r, int s, int t)
   {
      a = p;
      b = q;
      c = r;
      d = s;
      e = t;
   }

   void setData(void)
   {
      cout<<endl;
      cout << "Enter price of five items: ";
      cin >> a >> b >> c >> d >> e;
      cout<<endl;
   }

   void getData(void)
   {
      cout<<endl;
      cout<<"Price list are: "<<a<<" "<<b<<" "<<c<<" "<<" "<<d<<" "<<e<<" ";
      cout<<endl;
   }

   int largest(void)
   {
      int big;
      if (a >= b && a >= c && a >= d && a >= e)
      {
         big = a;
      }
      else if (b >= c && b >= d && b >= e)
      {
         big = b;
      }
      else if (c >= d && c >= e)
      {
         big = c;
      }
      else if (d >= e)
      {
         big = d;
      }
      else
      {
         big = e;
      }
      return big;
   }

   int sum(void)
   {
      return a + b + c + d + e;
   }
   void display(void)
   {
      cout<<endl;
      cout<<"Largest price is: "<<largest()<<endl;
      cout<<"Sum of all prices is: "<<sum()<<endl;
      cout<<endl;
   }
};

int main(int argc, char const *argv[])
{
   PriceList p1;
   p1.setData();
   p1.getData();
   p1.display();
   return 0;
}
