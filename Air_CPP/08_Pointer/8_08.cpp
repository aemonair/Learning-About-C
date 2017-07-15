#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Input your name: "<< endl;
    string name;
    cin >> name;

    int charstoallocate = name.length() + 1;
    char * copyforname = new char[charstoallocate];

    strcpy(copyforname, name.c_str());
    cout << "Name: "<< name<<endl;
    cout << "Copyname" << copyforname << endl;

    delete[]copyforname;
    return 0;
}
