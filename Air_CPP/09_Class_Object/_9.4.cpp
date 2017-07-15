#include <iostream>
using namespace std;

#if 0
class Human
{
public:
    ~Human() // declaration of a destructor
    {
        //destructor
    }
};
#else
class Human
{
    public:
        ~Human();
};

// destructor definition (implementation)
Human::~Human()
{
    // destructor code here
}
#endif
