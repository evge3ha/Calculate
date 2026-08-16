#include <iostream>
#include <string>
#include <cmath>
#include "calculator.h"

bool ReadNumber(Number& result) {
    bool flag = true;
    if(!(std::cin >> result)) {
        std::cerr << "Error: Numeric operand expected" << std::endl;
        flag = false;
    }
    return flag;
}

bool RunCalculatorCycle() {
    Number number_1 = 0, number_2 = 0, memory = 0;
    bool flag = false;
    std::string command;

    if(!ReadNumber(number_1)) {
        return false;
    }

    while(std::cin >> command) {
        if(command == "q") {
           break; 
        } else if(command == "+") { 
            if(!ReadNumber(number_2))
                break;
            number_1 += number_2;    
        } else if(command == "-") { 
            if(!ReadNumber(number_2))
                break;
            number_1 -= number_2;
        } else if(command == "*") { 
            if(!ReadNumber(number_2))
                break;
            number_1 *= number_2;
        } else if(command == "/") { 
            if(!ReadNumber(number_2))
                break;
            //if(number_2 == 0) {
            //    std::cerr << "Error: Division by zero" << std::endl;
            //   break;
           // }
            number_1 /= number_2;
        } else if(command == "**") { 
            if(!ReadNumber(number_2))
                break;
            number_1 = std::pow(number_1, number_2);
        } else if(command == "c") { 
            number_1 = 0;
        } else if(command == "=") { 
            std::cout << number_1 << std::endl;
        } else if (command == ":") { 
                if(!ReadNumber(number_2))
                    break;
                number_1 = number_2;
        } else if(command == "s") { 
            memory = number_1;
            flag = true;
        } else if(command == "l") {
            if(!flag) {
                std::cerr << "Error: Memory is empty" << std::endl;
                break;
            }
            number_1 = memory;
        } else {
            std::cerr << "Error: Unknown token " << command << std::endl;
                break;
        }
    }
    return true;
}
