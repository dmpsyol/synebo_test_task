#include <iostream>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

using namespace std;

bool isFactorial( size_t number )
{
    const size_t factorials[] = { 1, 2, 6, 24, 120, 720 };

    for ( size_t i = 0; i < ARRAY_LENGTH( factorials ); ++i )
        if ( number == factorials[ i ] )
            return true;

    return false;
}

size_t numberUnderFactorial(size_t number)
{
    size_t i = 2, res = 0;

    while ( number > 1)
    {
        res = number;
        number /= i++;
    }

    return res;
}

int main()
{
    size_t input;

    while ( true )
    {
        cout << "Enter input: ";
        cin >> input;

        if ( input >= 1 && input <= 2000 )
            break;
        else cout << "Input must be >= 1 and <= 2000. Try again!\n";
    }

    if ( isFactorial( input ) )
        cout << "The number under factorial is " << numberUnderFactorial( input ) << endl;

    else cout << "Input value is not a factorial!" << endl;

    return 0;
}
