#include <iostream>

int main() {
    int n, rem;
    // creates two variables of type integer

    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 2;
    // rem is now the remainder of the integer division of n
    // it will be 0 if n is even
    // it will be 1 is n is odd

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;
}