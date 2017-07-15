#include <set>

// used as a template parameter in set / multiset instantiation
template <typename T>
struct SortDescending
{
    bool operator()(const T& lhs, const T& rhs) const
    {
        return (lhs > rhs);
    }
};

int main()
{
    using namespace std;

    // a simple set or multiset of integers (using default sort predicate)
    set <int> setIntegers1;
    multiset <int> msetIntegers1;

    // set and multiset instantisted given a user-default sort predicate
    set<int, SortDescending<int>>setIntegers2;
    multiset <int, SortDescending<int>>msetIntegers2;

    // creating one set from another , or part of another container
    set<int> setIntegers3(setIntegers1);
    multiset<int> msetIntegers3(setIntegers1.cbegin(), setIntegers1.cend());
    return 0;
}
