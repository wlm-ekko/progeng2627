#include <iostream>

int main() {
    double celsius, fahrenheit;

    std::cout << "Temperature in celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    std::cout << "Temperature in fahrenheit = " << fahrenheit << std::endl;
}