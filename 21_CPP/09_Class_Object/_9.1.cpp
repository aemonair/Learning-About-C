#include <iostream>
using namespace std;

//_9.1.1.
class Human
{
public:
    // Data attributes:
    string Name;
    string DateOfBirth;
    string PlaceOfBirth;
    string Gender;

    //Methods:
    void Talk(string TextToTalk);
    void IntroduceSelf()
    {
        cout << "Hi ~" << endl;
    }

    //..
};

int main()
{
#if 0
    //9.1.2
    double Pi = 3.1415; // a double declared as a local variable(on stack)
    Human Tom; // An object of class Human declared as a local variable
    int * pNumber = new int; // an integer allocated dynamically on free store
    delete pNumber; // de-allocating the memory
    Human * pAnotherHuman = new Human(); // dynamically allocated Huaman
    delete pAnotherHuman; // de-allocating memory allocated for a Human
#elif 1
    // 9.1.3
    Human Tom; // an instance of Human
    Tom.DateOfBirth = "1970";
    Tom.IntroduceSelf();

    Human * pTom = new Human();
    pTom->DateOfBirth = "1970";
    (*pTom).IntroduceSelf();
    pTom->IntroduceSelf();
    delete pTom;
#else
    // 9.1.4
    Human Tom;
    Human *pTom = &Tom;
    pTom->DateOfBirth = "1970";
    pTom->IntroduceSelf();
#endif
    return 0;
}
