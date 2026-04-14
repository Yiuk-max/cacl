#include "head.hpp"
int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return a / b;
}