#include <iostream>

bool isOperator(std::string token) {
    if (token == "+" || token == "-" || token == "*" || token == "/") {
        return true;
    }
    return false;
}