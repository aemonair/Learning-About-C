#include <iostream>
using namespace std;

#if 0
class Human
{
public:
    Human(); // constructor declaration
};

#if 0
class Human
{
public:
    Human()
    {
        //constructor code here.
    }
};
#else
// constructor definition (implementation)
Human::Human()
{
    //constructor code here
    cout << "constructor code here" << endl;
}
#endif
#elif 0
class Human
{
public:
    Human()
    {
        // default constructor code here
    }

    Human(string HumansName)
    {
        // overloaded constructor code here
    }
};
#else
class Human
{
    private:
        // Private menber data:
        string Name;
        int Age;

    public:
        // overloaded constructor (no default constructor)
        Human(string HumansName, int HumansAge = 25)
        {
            Name = HumansName;
            Age = HumansAge;
            cout << "Overloaded constructor creates " << Name;
            cout << " of age " << Age << endl;
        }
        
        // ... other members
};

int main()
{
    Human Adam("Adam");
    Human Eve("Eve", 18);
}
#endif
