#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void DisplayVector (const vector<T>& vecInput)
{
    for (auto iElement = vecInput.cbegin()
        ; iElement != vecInput.cend()
        ; ++ iElement )
        cout << *iElement << ' ';

    cout << endl;
}

int main()
{
    vector <int> vecIntegers;

    // Insert sample integers into the vector:
    vecIntegers.push_back (50);
    vecIntegers.push_back (1);
    vecIntegers.push_back (987);
    vecIntegers.push_back (1001);

    cout << "Vector contains " << vecIntegers.size() << " elements: ";
    DisplayVector (vecIntegers);

    // Erase one element at the end
    vecIntegers.pop_back ();

    cout << "After a call to pop_back()" << endl;
    cout << "Vector contains " << vecIntegers.size() << " elements: ";
    DisplayVector (vecIntegers);

    return 0;
}
