#include <iostream>

int main() {
    double width, length, area, perimeter;

    std::cout << "Width: ";
    std::cin >> width;

    std::cout << "Length: ";
    std::cin >> length;

    area = width * length;
    perimeter = 2 * (width + length);

    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
}