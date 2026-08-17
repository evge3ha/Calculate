#include <iostream>
#include <string>
#include <cmath>
#include "calculator.h"

bool ReadNumber(Number& result) {
    if (!(std::cin >> result)) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        return false;
    }
    return true;
}

bool RunCalculatorCycle() {
    Number current_value = 0;
    Number operand       = 0;
    Number memory        = 0;
    bool is_memory_saved = false;
    std::string command;

    if (!ReadNumber(current_value)) {
        return false;
    }

    while (std::cin >> command) {
        if (command == "q") {
            return true;
        } else if (command == "+") {
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value += operand;
        } else if (command == "-") {
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value -= operand;
        } else if (command == "*") {
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value *= operand;
        } else if (command == "/") {
            if (!ReadNumber(operand)) {
                return false;
            }
            if (operand == 0) {
                std::cerr << "Error: Division by zero" << std::endl;
                return false;
            }
            current_value /= operand;
        } else if (command == "**") {
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = std::pow(current_value, operand);
        } else if (command == "c") {
            current_value = 0;
        } else if (command == "=") {
            std::cout << current_value << std::endl;
        } else if (command == ":") {
            if (!ReadNumber(operand)) {
                return false;
            }
            current_value = operand;
        } else if (command == "s") {
            memory = current_value;
            is_memory_saved = true;
        } else if (command == "l") {
            if (!is_memory_saved) {
                std::cerr << "Error: Memory is empty" << std::endl;
                return false;
            }
            current_value = memory;
        } else {
            std::cerr << "Error: Unknown token " << command << std::endl;
            return false;
        }
    }
    return true;
}