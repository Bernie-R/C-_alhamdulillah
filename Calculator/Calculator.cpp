#include "Calculator.h"
#include <iostream>
#include <limits>  // include for numeric_limits

void Calculator::calculate() {

    std::string option;

    do {
        int first, second;

        // Get valid input for first number
        while (true) {
            std::cout << "Enter First number: ";
            std::cin >> first;

            if (std::cin.fail()) { // Check if input is valid
                std::cout << "Invalid input. Please enter a valid integer." << std::endl;
                std::cin.clear(); // Clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input
            } else {
                break;
            }
        }

        // Get valid input for second number
        while (true) {
            std::cout << "Enter Second number: ";
            std::cin >> second;

            if (std::cin.fail()) { // Check if input is valid
                std::cout << "Invalid input. Please enter a valid integer." << std::endl;
                std::cin.clear(); // Clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input
            } else {
                break;
            }
        }

        this->setNumbers(first, second);

        std::cout << "What calculation do you want to do?" << std::endl;
        std::cout << "Following options are availabel:" << std::endl;
        std::cout << "1. Add - Write '+' " << std::endl;
        std::cout << "2. Subtract - Write '-' " << std::endl;
        std::cout << "3. Multiply - Write '*' " << std::endl;
        std::cout << "4. Divide - Write '/' " << std::endl;
        std::cout << "5. To quit - Write 'quit' " << std::endl;

        while (true) {
            std::cout << "Enter an option (+, -, *, /): ";
            std::cin >> option;

            if (option == "+" || option == "-" || option == "*" || option == "/") {
                std::cout << "You entered a valid option: " << option << std::endl;
                break;
            } else if (option == "quit") {
                std::cout << "Quitting calculator..." << std::endl;
                return;
            } else {
                std::cout << "You entered an invalid option. Please try again or type 'quit' to exit." << std::endl;
            }
        };

        std::cout << "First number check: " << first << std::endl;
        std::cout << "Second number check: " << second  << std::endl;

        if (option == "+") {
            std::cout << "Result: " << add() << std::endl;
        } else if (option == "-") {
            std::cout << "Result: " << subtract() << std::endl;
        } else if (option == "*") {
            std::cout << "Result: " << multiply() << std::endl;
        } else {
            std::cout << "Result: " << divide() << std::endl;
        }

    } while (option != "quit");
}
