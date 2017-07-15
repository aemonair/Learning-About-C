#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    int dogsAge = 9;
    int * p_Age = &Age;

    cout << "The Age is " << Age << endl;
    cout << "The dogsAge is " << dogsAge << endl;

    cout << "The Address of p_Age is" << hex << p_Age << endl;
    cout << "The value of *point is " << dec << *p_Age << endl;

    p_Age = &dogsAge;
    cout << "The Address of p_Age is" << hex << p_Age << endl;
    cout << "The value of *point is " << dec << *p_Age << endl;

    return 0;
}
