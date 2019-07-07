#include <iostream>

bool isOperator(std::string token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}