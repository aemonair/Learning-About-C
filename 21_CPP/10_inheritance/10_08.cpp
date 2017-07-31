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

class Car : private Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

class MySuperCar: public Car
{
public:
    void SuperMove()
    {
        Move();
        // Motor::PumpFuel();
    }
};

int main()
{
    Car myDreamCar;
    myDreamCar.Move();
    //myDreamCar.PumpFuel();
    MySuperCar car;
    car.SuperMove();

    return 0;
}
