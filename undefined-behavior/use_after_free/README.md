
# Use After Free

**Description:**

Accessing memory after it has been freed results in undefined behavior.

**Why it's UB:**

The memory is no longer valid after being freed, and accessing it leads to undefined results.

**How to Fix:**

Set the pointer to `nullptr` after deletion:

```cpp
delete ptr;
ptr = nullptr;
```
