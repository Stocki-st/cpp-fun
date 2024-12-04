
#include <iostream>

int main() {
    int x = 2147483647; // Maximum value for 32-bit signed integer
    std::cout << x + 1 << std::endl; // Undefined behavior: signed integer overflow
    return 0;
}
