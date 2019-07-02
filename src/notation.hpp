#include "token.hpp"
#include "checker.hpp"
std::string calculate(std::string calc) {
    std::vector<std::string> tokens = generateTokens(calc);
    std::stack<std::string> tokensStack;

    for (int i = 0; i < tokens.size(); i++) {
        if (isOperator(tokens.at(i))) {
            int operand_2 = std::stoi(tokensStack.top());
            tokensStack.pop();
            int operand_1 = std::stoi(tokensStack.top());
            tokensStack.pop();
            int result;
            if (tokens.at(i) == "+") {
                result = operand_1 + operand_2;
            }

            if (tokens.at(i) == "-") {
                result = operand_1 - operand_2;
            }

            if (tokens.at(i) == "*") {
                result = operand_1 * operand_2;
            }

            if (tokens.at(i) == "/") {
                result = operand_1 / operand_2;
            }

            tokensStack.push(std::to_string(result));
        } else {
            tokensStack.push(tokens.at(i));
        }
    }
    return tokensStack.top();
}