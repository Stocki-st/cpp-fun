
#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    std::cout << arr[3] << std::endl; // Undefined behavior: out-of-bounds access
    return 0;
}
