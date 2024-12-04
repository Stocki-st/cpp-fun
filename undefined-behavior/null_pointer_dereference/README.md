
# Null Pointer Dereference

**Description:**

Dereferencing a null pointer results in undefined behavior.

**Why it's UB:**

The C++ standard does not define what happens when a null pointer is dereferenced.

**How to Fix:**

Always check for `nullptr` before dereferencing:

```cpp
if (ptr != nullptr) {
    std::cout << *ptr << std::endl;
}
```
