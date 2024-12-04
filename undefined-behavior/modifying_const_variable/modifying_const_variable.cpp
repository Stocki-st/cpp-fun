
#include <iostream>

int main() {
    const int x = 42;
    int* ptr = (int*)&x;
    *ptr = 100; // Undefined behavior: modifying const variable
    std::cout << x << std::endl;
    return 0;
}
