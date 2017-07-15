#include <string>
#include <iostream>

int main()
{
    using namespace std;

    string strSample1 ("Hello");
    string strSample2 (" String!");

    // Concatenate
    strSample1 += strSample2;
    cout << strSample1 << endl << endl;

    string strSample3 (" Fun is not needing to use pointers!");
    strSample1.append (strSample3);
    cout << strSample1 << endl << endl;

    const char * constCstyleString = " You however still can !";
    strSample1.append (constCstyleString);
    cout << strSample1 << endl ;

   return 0; 
}
