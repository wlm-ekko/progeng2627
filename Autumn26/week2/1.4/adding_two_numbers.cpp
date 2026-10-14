#include <iostream>

int main() {
    double n1, n2, sum;
    // declaring three variables of type double
    // double represents general decimal numbers

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    sum = n1 * n2;
    // the result of n1 + n2 is computed and stored in sum

    std::cout << n1 << " x " << n2 << " = " << sum << std::endl;
}