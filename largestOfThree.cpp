#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter three integers separated by spaces: ";
    std::cin >> num1 >> num2 >> num3;


    if (num1 >= num2) {

        if (num1 >= num3) {
            std::cout << "The largest integer is: " << num1 << std::endl;
        } else {

            std::cout << "The largest integer is: " << num3 << std::endl;
        }
    } else {
        // If num1 < num2, then num2 might be the largest. Compare num2 with num3.
        if (num2 >= num3) {
            std::cout << "The largest integer is: " << num2 << std::endl;
        } else {
            // If num1 < num2, and num2 < num3, then num3 is the largest.
            std::cout << "The largest integer is: " << num3 << std::endl;
        }
    }

    return 0;
}
