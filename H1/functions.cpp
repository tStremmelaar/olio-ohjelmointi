#include <iostream>
#include <limits>

using namespace std;

int inputValidation() {
    int input;
    cin >> input; // get input
    while(cin.fail()) { // input fails
        cin.clear(); // clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear input buffer
        cout << "Error. Try again: ";
        cin >> input; // get input
    }
    return input;
}

void calcSum(int a, int b) {
    int sum = a + b;
    cout << sum << endl;
}

void calcDiv(int a, int b) {
    if(b == 0) {
        cout << "Error. Can't divide by 0." << endl;
    } else {
        int quotient = a / b;
        cout << quotient << endl;
    }
}

int retSum(int a, int b) {
    int sum = a + b;
    return sum;
}

float retDiv(int a, int b) {
    if(b == 0) {
        cout << "Error. Can't divide by 0." << endl;
        return 0;
    } else {
        float quotient = (float)a / (float)b;
        return quotient;
    }
}
