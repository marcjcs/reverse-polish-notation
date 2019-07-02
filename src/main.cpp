#include "notation.hpp"

int main() {
    std::string exp = "20 50 +";
    std::stack<std::string> test = calculate(exp);
    while (!test.empty()) {
        std::cout << test.top() << std::endl;
        test.pop();
    }
    return 0;
}