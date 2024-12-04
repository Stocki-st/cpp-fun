
#include <iostream>

int main() {
    int* ptr = nullptr;
    std::cout << *ptr << std::endl; // Undefined behavior: dereferencing null pointer
    return 0;
}
