// Hello World with Void Function in C++

// In C++, Void is a keyword used to specify that a function does not return a value

#include <iostream>

void print_message() {
    std::cout << "Hello, World!";
}

int main() {
    print_message(); // Calls the function, but no value is returned
    return 0;
}