#include <iostream>
using namespace std;

int main()
{
    int * a = new int;
    cout << "Enter Your Number:"<<endl;
    cin >> *a;

    cout << "The input number is:" << *a << endl;
    cout << "The Address of number " << *a << " is " << a << endl;
    delete a;
}
