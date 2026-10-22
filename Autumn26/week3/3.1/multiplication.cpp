#include <iostream>

int main(){
    double x, acc = 0;
    int n, i = 0;

    std::cin >> x >> n;

    while(i < n){
        acc = x + acc;
        i++;
    }

    std::cout << x << " * " << n << " = " << acc << std::endl;
}