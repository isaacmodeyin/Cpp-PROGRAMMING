// prompt the user for two numbers and add them

#include <iostream>

int main() {
    //declare three integer variables to hold the numbers
    int num1, num2, sum;

    // asking for two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // adding the numbers
    sum = num1 + num2;

    // displaying the sum
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    return 0;
}