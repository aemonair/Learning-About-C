#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool IsEven (const int & nNumber)
{
    return ((nNumber % 2) == 0);
}

template <typename T>
void DisplayContents(const T& Input)
{
    for (auto iElement = Input.cbegin()
        ;   iElement != Input.cend()
        ; ++ iElement )
        std::cout << *iElement << ' ';

    cout << "| Number of elements: "<< Input.size() << endl;
}

int main()
{
    vector <int> vecIntegers;

    for (int nNum = 0; nNum < 10; ++ nNum)
    {
        vecIntegers.push_back(nNum);
    }

    cout << "The initial contents: " << endl;
    DisplayContents(vecIntegers);

    vector <int> vecCopy(vecIntegers);

    cout << "The effect of using partition():" << endl;
    std::partition (vecIntegers.begin(), vecIntegers.end(), IsEven);
    DisplayContents(vecIntegers);

    cout << "The effect of using stable_partition():" << endl;
    std::stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);
    DisplayContents(vecCopy);

    return 0;
}
