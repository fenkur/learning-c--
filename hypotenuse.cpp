#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Enter the lengths of Side A: ";
    std::cin >> a;
    std::cout << "Enter the lengths of Side B: ";
    std::cin >> b;
    double c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The length of the hypotenuse is: " << c << '\n';
    return 0;
}