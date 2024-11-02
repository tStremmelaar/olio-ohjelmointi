#include <iostream>

using namespace std;

void calcSum(int a, int b)
{
    // print sum of two ints
    int sum = a + b;
    cout << sum << endl;
}

void calcDiv(int a, int b)
{
    // print quotient of two ints
    if(b == 0)
    {
        cout << "Error: can not divide by 0" << endl;
    }
    else
    {
        int quotient = a / b;
        cout << quotient << endl;
    }
}
