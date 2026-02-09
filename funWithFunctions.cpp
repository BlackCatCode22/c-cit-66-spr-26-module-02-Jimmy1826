#include <iostream>
#include <algorithm>

// Function prototypes
int getAnIntFromTheUser();
int compareTwoInts(int num1, int num2);
int sumTwoInts(int num1, int num2);

int main() {
    int int1, int2, sum, largest;

    std::cout << "Demonstrating functions in C++" << std::endl;


    int1 = getAnIntFromTheUser();
    int2 = getAnIntFromTheUser();

    largest = compareTwoInts(int1, int2);
    std::cout << "The largest of the two integers is: " << largest << std::endl;

    sum = sumTwoInts(int1, int2);
    std::cout << "The sum of the two integers is: " << sum << std::endl;

    return 0;
}

int getAnIntFromTheUser() {
    int input_num;
    std::cout << "Please enter an integer: ";
    std::cin >> input_num;
    return input_num;
}

/**
 * Compares two integers and returns the larger one.
 * Uses std::max for simplicity.
 */
int compareTwoInts(int num1, int num2) {

    return std::max(num1, num2);
}

/**
 * Adds two integers and returns their sum.
 */
int sumTwoInts(int num1, int num2) {
    return num1 + num2;
}