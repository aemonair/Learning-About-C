// A struct as a unary predicate
template <typename numberType>
struct IsMultiple
{
    numberType Divisor;

    IsMultiple (const numberType& divisor)
    {
        Divisor = divisor;
    }

    bool operator ()(const numberType& element) const
    {
        // Check if the divisor is a multiple of the divisor
        return ((element % Divisor) == 0 );
    }
};
