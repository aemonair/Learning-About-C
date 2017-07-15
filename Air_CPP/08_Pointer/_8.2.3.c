#include <iostream>

        ////////////////////////////////////////////////
        //               three const :                //
	//                                            //
	// Data           : const int *       a = &a; //
	// Address        :       int * const a = &a; //
	// Data & Address : const int * const a = &a; //
	////////////////////////////////////////////////

int main()
{
#if 0
	////////////////////////////////////////////////
	// Data : const int * a = &a;                 //
	////////////////////////////////////////////////
	
    int a = 1;
    const int * point = &a; 
    // can't use point to change a

    int b = 2;
    point = &b ;
    // OK

    *point = 3 ;
    // Compile fails: cannot change data

    int *p_Another = point;
    // Compile fails: cannot assign const to non-const

#elif 0
	////////////////////////////////////////////////
	// Address : int * const a = &a;              //
	////////////////////////////////////////////////
	
    int a = 1;

    //pInterger cannot point anything else
    int * const point = &a;

    *point = 2; //Ok! Value can be changed

    int b = 3;
    point = &b; // Compile fails: Cannot change address!
#else
	////////////////////////////////////////////////
	// Data & Address : const int * const a = &a; //
	////////////////////////////////////////////////
	
    int a = 1;
    
    //pointer can only point to a
    const int * const point = &a;

    *point = 2;
    //Compile fails: cannot change pointed value

    int b = 3;
    point = &b ; //Compile fails: cannot change pointer value
#endif

    return 0;
}
