#include <alogrithm>
#include <string>
using namespace std;

class CompareStringNoCase
{
public:
    bool operator ()(const string& str1, const string& str2) const
    {
        string str1LowerCase;

        // Assign space
        str1LowerCase.resize(str1.size() );

        // Convert every character to the lower case
        transform (str1.begin(), str1.end(), str1LowerCase.begin(),
                   toLower);

        string str2LowerCase;
        str2LowerCase.resize(str2.size());
        transform (str2.begin(), str2.end(), str2LowerCase.begin(),
                   toLower);

        return (str1LowerCase < str2LowerCase);
    }
}
