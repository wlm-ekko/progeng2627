#include <iostream>
#include <string>
// this includes the header for text variables

int main() {
    std::string user_name;
    // new variable is being declared#
    // user_name is the name of the variable
    // std::string is the type of variable

    std::cout << "What is your name?" << std::endl;

    std::cin >> user_name;
    // reads information from keyboard and stores it in user_name
    // cin stands for console input

    std::cout << "hello, " << user_name << std::endl;
    // prints hello and then the content of the variable user_name
}