
#include <iostream>

int main() {
    int* ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Undefined behavior: use after free
    return 0;
}
