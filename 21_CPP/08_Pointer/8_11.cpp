#include <iostream>
using namespace std;

int main()
{
    // Static array of 5 integers
    int  MyNumbers[5];

    //array assigned to pointer to int
    int *pNumbers = MyNumbers;

    //Display address contained in pointer
    cout << "pNumbers = " << hex << pNumbers << endl;
    pNumbers++;
    cout << "pNumbers = " << hex << pNumbers << endl;

    //Address of first element of array
    cout << "&MyNumbers[0] = " << hex << &MyNumbers[0] << endl;
    cout << "&MyNumbers[1] = " << hex << &MyNumbers[1] << endl;
 // cout << "&MyNumbers[2] = " << hex << &MyNumbers[2] << endl;
 // cout << "&MyNumbers[3] = " << hex << &MyNumbers[3] << endl;
 // cout << "&MyNumbers[4] = " << hex << &MyNumbers[4] << endl;
 // cout << "&MyNumbers[5] = " << hex << &MyNumbers[5] << endl;

    return 0;
}
