// Write a program that:
//     1. Asks the user for two integers
//     2. prints the bigger one on the screen

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Ask the user for two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Compare and print the bigger number
    if (num1 > num2) {
        cout << "The bigger number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The bigger number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

// Return Statement: The main function returns 0, indicating successful execution