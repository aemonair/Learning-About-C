#include <iostream>
using namespace std;

class Motor
{
public:
    void SwitchIgnition()
    {
        cout << "Ignition ON" << endl;
    }
    void PumpFuel()
    {
        cout << "Fuel in cylinders" << endl;
    }
    void FireCylinders()
    {
        cout << "Vroooom" << endl;
    }
};

class Car : protected Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

class SuperCar : protected Car
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
        FireCylinders();
        FireCylinders();
    }
};

int main()
{
    SuperCar myDreamCar;
    myDreamCar.Move();

    return 0;
}
