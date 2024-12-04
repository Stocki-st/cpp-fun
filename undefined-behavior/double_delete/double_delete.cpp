
#include <iostream>

int main() {
    int* ptr = new int(42);
    delete ptr;
    delete ptr; // Undefined behavior: double delete
    return 0;
}
