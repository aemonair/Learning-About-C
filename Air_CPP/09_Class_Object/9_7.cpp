#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class MyString
{
    private:
        char * Buffer;

    public:
        // Constructor
        MyString(const char * InitialInput)
        {
            if(InitialInput != NULL)
            {
                Buffer = new char [strlen(InitialInput) + 1];
                strcpy(Buffer, InitialInput);
            }
            else
                Buffer = NULL;
        }

        // Destructor: clears the buffer allocated in constructor
        ~MyString()
        {
            cout << "Invoking destructor, clearing up"<< endl;
            if(Buffer != NULL)
                delete [] Buffer;
        }

        int GetLength()
        {
            return strlen(Buffer);
        }

        const char *GetString()
        {
            return Buffer;
        }
};  // end of class MyString

int main()
{
    MyString SayHello("Hello from String Class");
    cout << "String buffer in MyString is " << SayHello.GetLength();
    cout << " Characters long" << endl;

    // cout << "Buffer contains: ";
    cout << "Buffer contains: " << SayHello.GetString()<< endl;
}
