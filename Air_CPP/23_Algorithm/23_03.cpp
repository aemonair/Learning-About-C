#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents (const T& Input)
{
    for (auto iElement = Input.cbegin()
        ;   iElement  != Input.cend()
        ;++iElement )
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    // A sample container - vector of integers - containing -9 to 9
    vector <int> vecIntegers;
    for (int nNum = -9; nNum < 10; ++ nNum)
        vecIntegers.push_back (nNum);

    // Insert some more sample values into the vector
    vecIntegers.push_back (9);
    vecIntegers.push_back (9);

    // Another sample container - a list of integers from -4 to 4
    list <int> listIntegers;
    for (int nNum = -4; nNum < 5; ++ nNum)
        listIntegers.push_back (nNum);

    cout << "The contents of the sample vector are: " << endl;
    DisplayContents (vecIntegers);

    cout << "The contents of the sample list are: " << endl;
    DisplayContents (listIntegers);

    cout << "search() for the contents of list in vector:" << endl;
    auto iRange = search ( vecIntegers.begin()
                         , vecIntegers.end()
                         , listIntegers.begin()
                         , listIntegers.end() );
    
    // Check if search found a match
    if (iRange != vecIntegers.end())
    {
        cout << "Sequence in list found in vector at position: ";
        cout << distance (vecIntegers.begin(), iRange) << endl;
    }

    cout << "Searching {9, 9, 9} in vector using search_n():" << endl;
    auto iPartialRange = search_n ( vecIntegers.begin()
                                  , vecIntegers.end()
                                  , 3
                                  , 9 );

    if (iPartialRange != vecIntegers.end())
    {
        cout << "Sequence {9, 9, 9} found in vector at position: ";
        cout << distance (vecIntegers.begin(), iPartialRange) << endl;
    }
    return 0;
}
