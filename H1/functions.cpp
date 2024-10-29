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
