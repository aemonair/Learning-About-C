#include <vector>
#include <iostream>
using namespace std;

int main()
{
    //vector <int> vecIntegers;
    //
    // Insert sample integers into the vector
    //vecIntegers.push_back (50);
    //vecIntegers.push_back (1);
    //vecIntegers.push_back (987);
    //vecIntegers.push_back (1001);

    //2//vector<int> vecIntegers = {50, 1, 987, 1001};
    vector<int> vecIntegers {50, 1, 987, 1001};
    cout << "The vector contains ";
    cout << vecIntegers.size() << " Elements" << endl;

    return 0;
}
