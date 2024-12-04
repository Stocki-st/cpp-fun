
# Modifying a `const` Variable

**Description:**

Modifying a `const` variable through a pointer or other means results in undefined behavior.

**Why it's UB:**

The C++ standard specifies that modifying a `const` object is undefined behavior.

**How to Fix:**

Do not attempt to modify `const` variables. Instead, remove `const` if modification is needed:

```cpp
int x = 42;
x = 100;
```
