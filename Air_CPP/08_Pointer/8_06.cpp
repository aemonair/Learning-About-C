#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    double b = 2.0;
    char c = 'c';

    int *p_a = &a;
    double *p_b = &b;
    char *p_c = &c;

    cout << "sizeof int : "   << sizeof(a) <<endl;
    cout << "sizeof double :" << sizeof(b) << endl;
    cout << "sizeof char :"   << sizeof(c) << endl;

    cout << "sizeof p_int : "   << sizeof(p_a) <<endl;
    cout << "sizeof p_double :" << sizeof(p_b) << endl;
    cout << "sizeof p_char :"   << sizeof(p_c) << endl;

    return 0;
}
