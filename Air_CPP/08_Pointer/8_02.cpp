#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    int *p_Age = &Age;

    cout<< "The Address is 0x" << hex << p_Age << endl;

    return 0;
}
