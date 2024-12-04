
# Out-of-Bounds Array Access

**Description:**

Accessing an array out of its defined bounds results in undefined behavior.

**Why it's UB:**

The C++ standard does not define the result of accessing memory outside the array bounds.

**How to Fix:**

Ensure index values are within bounds:

```cpp
for (int i = 0; i < 3; ++i) {
    std::cout << arr[i] << std::endl;
}
```
