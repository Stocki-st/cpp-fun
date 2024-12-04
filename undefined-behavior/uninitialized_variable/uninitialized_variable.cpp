
#include <iostream>

int main() {
    int x; // Uninitialized variable
    std::cout << x << std::endl; // Undefined behavior: reading uninitialized variable
    return 0;
}
