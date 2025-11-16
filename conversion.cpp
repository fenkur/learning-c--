#include <iostream>

int main() {
    /*
    Implicit = automatic conversion
    Explicit = manual conversion
    */
    double pie = 3.14159;
    int intPie = int(pie);
    std::cout << pie << '\n';
    std::cout << intPie << '\n';
    return 0;
}