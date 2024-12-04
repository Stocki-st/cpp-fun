
# Race Condition

**Description:**

Concurrent access to a shared variable without proper synchronization results in undefined behavior.

**Why it's UB:**

The C++ standard does not define the result of data races.

**How to Fix:**

Use synchronization primitives like `std::mutex`:

```cpp
std::mutex mtx;

void increment() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++shared_var;
    }
}
```
