//how is array used under class. lets see
/*
A shop having item name and their respective price. 
assuming shop might have 50-100 items. if a customers comes, 
make a program in such a way that he will use a machine 
to get the price of the item he wants by typing the name of the
item
*/

#include <bits/stdc++.h>
using namespace std;

class shop
{
    string itemName[100];
    int price[100];
    int counter;

public:
    void itcounter(void) { counter = 0; }
    void ItemPrice(void);
    int chkPrice(void);
    void Display(void);
};

void shop::ItemPrice(void)
{
    cout << "Enter the name of the item you want to shop from Sidrat's SuperMarket: ";
    cin >> itemName[counter];
    counter++;
}

int shop :: chkPrice(void)
{
    if (itemName[counter] == "DairyMilk")
    {
        price[counter] = 160;
    }
    else if(itemName[counter] == "Dove Hair Conditioner")
    {
        price[counter] = 299;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    // counter++;
}

void shop :: Display(void)
{
    cout<<"The price of "<<itemName[counter]<<" is"<<price[counter]<<endl;
    // counter++;
}



int main(int argc, char const *argv[])
{
    shop SidratSupermarket;
    SidratSupermarket.ItemPrice();
    SidratSupermarket.chkPrice();
    SidratSupermarket.Display();

    return 0;
}
