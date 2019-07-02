#include "notation.hpp"

int main() {
    std::string exp_1 = "20 50 +";
    std::string exp_2 = "15 7 1 1 + - / 3 * 2 1 1 + + -";
    std::string exp_3 = "50 50 + 50 -";
    std::string test_1 = calculate(exp_1);
    std::string test_2 = calculate(exp_2);
    std::string test_3 = calculate(exp_3);
    std::cout << "Results: " << std::endl;
    std::cout << test_1 << std::endl << test_2 << std::endl << test_3 << std::endl;
    return 0;
}