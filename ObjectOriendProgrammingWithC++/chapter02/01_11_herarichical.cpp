#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
class TwoWheeler : public Vehicle  //01
{
public:
    TwoWheeler()
    {
        cout << "This is a TwoWheeler" << endl;
    }
};

class Scooter : public TwoWheeler
{
public:
    Scooter()
    {
        cout << "This is a Scooter" << endl;
    }
};

class Bike : public TwoWheeler
{
public:
    Bike()
    {
        cout << "This is a Bike" << endl;
    }
};

class Bicycle : public TwoWheeler
{
public:
    Bicycle()
    {
        cout << "This is a Bicycle" << endl;
    }
};

class FourWheeler : public Vehicle //02
{
public:
    FourWheeler()
    {
        cout << "This is a FourWheeler" << endl;
    }
};

class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "This is a Car" << endl;
    }
};

class Truck : public FourWheeler
{
public:
    Truck()
    {
        cout << "This is a Truck" << endl;
    }
};

class Bus : public FourWheeler //multiple
{
public:
    Bus()
    {
        cout << "This is a Bus" << endl;
    }
};

int main()
{
    Bus b1;
    return 0;
}