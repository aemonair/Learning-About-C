#include <vector>

int main()
{
    std::vector <int> vecIntegers;

    // Instantiate a vector with 10 elements (it can grow larger)
    std::vector <int> vecWithTenElements (10);

    // Instantiate a vector with 10 elements, each initialized to 90
    std::vector <int> vecWithTenInitializedElements (10, 90);

    // Instantiate one vector and initialize it to the contents of another
    std::vector <int> vecArrayCopy (vecWithTenInitializedElements);

    // Using iterators instantiate vector to 5 elements from another
    std::vector <int> vecSomeElementsCopied (vecWithTenElements.cbegin() 
                                      , vecWithTenElements.cbegin() + 5);
    
    return 0;
}
