
#include <iostream>
#include <thread>

int shared_var = 0;

void increment() {
    for (int i = 0; i < 1000; ++i) {
        ++shared_var; // Undefined behavior: race condition
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Shared variable: " << shared_var << std::endl;
    return 0;
}
