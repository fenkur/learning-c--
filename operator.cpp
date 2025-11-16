#include <iostream>

int main() {
    /*
    Parenthesis
    Multiplication / Division
    Addition / Subtraction
    */
    
    int counter = 0;
    counter += 1;
    counter++;
    ++counter;

    counter -= 1;
    counter--;
    --counter;

    counter = 10;
    counter *= 2;
    counter /= 2;
    // counter %= 2;


    std::cout << counter << '\n';
    return 0;
}