
#include <iostream>
#include <string>
#include <algorithm>
include <limits>

int main() {
    std::string user_input;

    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, user_input);
    std::reverse(user_input.begin(), user_input.end());
    std::cout << "Reversed string: " << user_input << std::endl;

    return 0;

