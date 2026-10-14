#include <iostream>

int main() {
    double bmi, weight, height;

    std::cout << "What is your weight?" << std::endl;
    std::cin >> weight;

    std::cout << "What is your height?" << std::endl;
    std::cin >> height;

    bmi = weight / (height*height);

    std::cout << "BMI: " << bmi << std::endl;
}