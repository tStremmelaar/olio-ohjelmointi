#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int a, b, sum;
    float quotient;
    cout << "Enter a whole number: ";
    a = inputValidation();

    cout << "Enter another whole number: ";
    b = inputValidation();

    calcSum(a, b);
    calcDiv(a, b);

    sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;
    quotient = retDiv(a, b);
    if(quotient != 0) {
        cout << a << " / " << b << " = " << quotient << endl;
    }

    return 0;
}
