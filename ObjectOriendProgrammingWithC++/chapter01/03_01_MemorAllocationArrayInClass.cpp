#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemId[100];
    int price[100];
    int counter;

public:
    void incounter(void) { counter = 0; }
    void itemid(void);
    void Display(void);
};

void shop::itemid(void)
{
    cout << "Enter the id of the item: " << counter + 1;
    cin >> itemId[counter];
    cout << "Enter the price of the item: ";
    cin >> price[counter];
    counter++;
}

void shop ::Display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The id of the item is " << itemId[i] << " and the price of the item is: " << price[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    shop dukan;
    dukan.incounter();
    int n=5;
    for(int i=0; i<n; i++){
        dukan.itemid();
    }
    dukan.Display();

    return 0;
}
