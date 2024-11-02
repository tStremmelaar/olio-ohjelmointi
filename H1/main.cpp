#include <iostream>
#include "mathfunctions.h"

using namespace std;

int main()
{
    int a, b;
    int sum;
    float fraction;

    // get values for integers
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    //cout << a << endl << b << endl; // debug print

    calcSum(a, b);
    calcDiv(a, b);

    sum = retSum(a, b);
    cout << sum << endl;
    fraction = retDiv(a, b);
    cout << fraction << endl;

    return 0;
}
