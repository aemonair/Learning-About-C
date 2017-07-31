#include <iostream>
using namespace std;

int main()
{
    try
    {
        //Request lots of memory space
        int * pAge = new int[9536870911];

        //use the allocated memory

        delete[] pAge;
    }
    catch (bad_alloc)
    {
        cout << "memory allocation failed. Ending progam" << endl;
    }
    return 0;
}
