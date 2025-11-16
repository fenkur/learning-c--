#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    // std::cin >> name;
    // Using getline to allow names with spaces
    std::getline(std::cin, name);

    std::cout << "Hello, my name is " << name << '\n';
    return 0;
}