#include <iostream>
//include "math.h"
using namespace std;
int main()
{
    double integer, out;
    cout << "Enter a number.";
    cin >> integer;
    if (floor(integer) == ceil(integer))
    {
        cout << "The value is a whole number.";
    }
    else
    {
        cout << "The value is a decimal.";
    }
    
    
    return 0;
}
