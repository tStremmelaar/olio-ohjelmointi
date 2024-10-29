#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a whole number: ";
    a = inputValidation();

    cout << "Enter another whole number: ";
    b = inputValidation();

    cout << "inputs: " << a << " " << b << endl; // debug print

    return 0;
}
