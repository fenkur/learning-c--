#include <iostream>
#include <cmath>
int main() {
    int x = 2;
    int y = 3;
    int z;

    z = std::max(x, y);
    std::cout << "The maximum value between " << x << " and " << y << " is " << z << '\n';
    z = std::min(x, y);
    std::cout << "The minimum value between " << x << " and " << y << " is " << z << '\n';

    // z = pow(2, 4);
    z = sqrt(10);
    std::cout << z << '\n';

    int v = abs(-5);
    std::cout << v << '\n';
    
    double pi = 3.14;
    pi = round(pi);
    std::cout << pi << '\n';
    pi = ceil(3.5);
    std::cout << pi << '\n';
    return 0;
}