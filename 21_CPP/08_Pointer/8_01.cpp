#include <iostream>
using namespace std;

int main()
{
    int Age = 3;
    const double Pi = 3.1416;

    //int *pAge = &Age;
    cout << "The address of integer Age at" << hex << &Age <<endl;
    cout << "The address of integer Age at" <<  &Age <<endl;
    cout << "The address of double  Pi  at" << hex << &Pi  <<endl;
    cout << "The address of double  Pi  at" <<  &Pi  <<endl;

}
