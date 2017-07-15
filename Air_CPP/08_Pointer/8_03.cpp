#include <iostream>
using namespace std;

int main()
{
    int Age = 30;
    int Age2 = 50;
    int* p_Age = &Age;

    cout << "The address now is at" <<endl;
    cout << hex << p_Age << endl;

    p_Age = &Age2;
    cout << "The address now is at" <<endl;
    cout << hex << p_Age << endl;
}
