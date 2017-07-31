#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector <int> vecIntegers;

    for (int nCount = 0; nCount < 10; ++ nCount)
        vecIntegers.push_back (nCount);

    list <char> listChars;

    for (char nChar = 'a'; nChar < 'k'; ++ nChar)
        listChars.push_back (nChar);

    cout << "Displaying vector of integers using a lambda: " << endl;

    // Display the array of integers
    for_each (vecIntegers.begin()
            , vecIntegers.end()
            , [](int& element){cout << element << ' ';});

    cout << endl << endl;
    cout << "Displaying list of characters using a lambda: " << endl;

    // Display the list of charecters
    for_each ( listChars.begin()
            ,  listChars.end ()
            ,  [](char& element){cout << element << ' ';});

    cout << endl;
    
    return 0;
}
