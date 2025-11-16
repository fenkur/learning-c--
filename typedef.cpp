#include <iostream>
#include <vector>


// typedef std::vector<std::pair<std::string, int>> pairList_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;
int main() {
    // pairList_t pairlist;
    // std::string name;
    text_t firstName = "Fenky";
    number_t age = 15;
    std::cout << firstName << '\n';
    std::cout << age << '\n';
    return 0;
}