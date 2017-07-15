#include <iostream>
using namespace std;

int main()
{
    int Original = 30;
    const int & ConstRef = Original;
//  ConstRef = 40;                    // Not allowed: ConstRef can't change value in original
//  int & Ref2 = ConstRef;            // Not allowed: Ref2 is not const
    const int & ConstRef2 = ConstRef; // OK
}
