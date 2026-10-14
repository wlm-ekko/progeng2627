#include <iostream>

int main() {
    double pounds, rate, euros;

    std::cout << "Amount in pounds: ";
    std::cin >> pounds;

    std::cout << "Current exchange rate to Euros: ";
    std::cin >> rate;

    euros = pounds * rate;

    std::cout << "Amount in euros = " << euros << std::endl;
}