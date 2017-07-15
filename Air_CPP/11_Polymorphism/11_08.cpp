#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal constructor" << endl;
    }

    // sample method
    int Age;
};

class Mammal : public virtual Animal
{
public:
    Mammal()
    {
        cout << "Mammal constructor" << endl;
    }
};

class Bird : public virtual Animal
{
public:
    Bird()
    {
        cout << "Bird constructor" << endl;
    }
};

class Reptile : public virtual Animal
{
public:
    Reptile()
    {
        cout << "Reptile constructor" << endl;
    }
};

class Platypus : public Mammal, public Bird, public Reptile
{
public:
    Platypus()
    {
        cout << "Platypus constructor" << endl;
    }
};

int main()
{
    Platypus duckBilledP;

    // no compile error as there is only one Animal::Age
    duckBilledP.Age = 25;

    return 0;
}
