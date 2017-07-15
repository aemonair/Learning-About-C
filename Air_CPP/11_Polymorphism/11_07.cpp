#include <iostream>
using namespace std;

class Animal
{
public :
    Animal()
    {
        cout << "Animal constructor" << endl;
    }
    
    // sample method
    int Age;
};

class Mammal:public Animal
{
public:
    Mammal()
    {
        cout << "Mammal constructor" << endl;
    }
};

class Bird : public Animal
{
public:
    Bird()
    {
        cout << "Bird constructor" << endl;
    }
};

class Reptile : public Animal
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

    // uncomment next line to see compile failure
    // Age is ambiguous as there are three instance of base Animal
    // duckBilledP.Age = 25; // ambiguous

    duckBilledP.Mammal::Age  = 25;
    duckBilledP.Bird::Age    = 25;
    duckBilledP.Reptile::Age = 25;

    return 0;
}
