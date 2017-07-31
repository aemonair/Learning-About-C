#include <iostream>
using namespace std;

class Human
{
private:
    // Private member data:
    int Age;
    string Name;

public:
    int GetAge()
    {
        return Age;
    }

    void SetAge(int InputAge)
    {
        Age = InputAge;
    }

    // ... Other members and declarations
};

int main()
{
    Human Eve;

    // cout << Eve.Age; // compile error
    cout << Eve.GetAge();

    // Eve.Age = 22; // compile error 
    Eve.SetAge(22); //OK
}
