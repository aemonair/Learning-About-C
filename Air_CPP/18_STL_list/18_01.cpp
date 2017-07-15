#include <list>
#include <vector>

int main()
{
    using namespace std;

    // instantiate an empty list
    list <int> listIntegers;

    // instantiate a list with 10 integers
    list<int> listWith10Integers(10);

    // instantiate a list with 4 integers, each initializes to 99
    list<int> listWith4IntegerEach99 (10, 99);

    // a vector with 10 integers, each 2011
    vector<int> vecIntegers (10, 2011);

    // instantiate a list using values from another container
    list<int> listContainsCopyOfAnother (vecIntegers.cbegin(),
                                         vecIntegers.cend() );

    return 0;
}
