#include <iostream>
using namespace std;

int main()
{
    // Request lots of memory space, use nothrow version
    int * pAge = new (nothrow) int (0xffffffff);

    if(pAge) // check pAge != NULL
    {
        //Use the allocated memory
        cout << "successfully allocated." << endl;
        delete []pAge;
    }
    else
    {
        cout << "Menory allocation failed. Ending program." << endl;
    }
    return 0;
}
