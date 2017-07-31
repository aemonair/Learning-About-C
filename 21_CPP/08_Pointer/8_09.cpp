#include <iostream>
using namespace std;

int main()
{
    int inputnums = 0;
    cout << "How many numbers do u want to input?" << endl;
    cin >> inputnums;

    int *pnumber = new int[inputnums];
    int *pcopy = pnumber;

    cout << "Successful allocate " << inputnums << " Intergers" <<endl;

    for(int iterator=0;iterator < inputnums; ++iterator)
    {
        cout << "input the "<< iterator << "th numbers: ";
	cin >> *(pnumber + iterator);
    }

    cout << "Dispaly all Numbers:" <<endl;
    for(int index = 0; index < inputnums; ++index)
    {
        cout << *(pcopy++) << endl;
    }
    delete[] pnumber;
}
