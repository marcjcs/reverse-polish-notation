#include <iostream>

// TODO: add other operators, project is way too simple as it is now

bool isOperator(std::string token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}