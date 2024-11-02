#include <iostream>
#include "mathfunctions.h"

using namespace std;

int main()
{
    int a, b;
    int result;

    // get values for integers
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    //cout << a << endl << b << endl; // debug print

    calcSum(a, b);
    calcDiv(a, b);

    result = retSum(a, b);
    cout << result << endl;

    return 0;
}
