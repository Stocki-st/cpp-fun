
# Uninitialized Variable

**Description:**

Using an uninitialized variable results in undefined behavior because the variable contains an indeterminate value.

**Why it's UB:**

The C++ standard does not guarantee the behavior when reading an uninitialized variable.

**How to Fix:**

Initialize the variable before using it:

```cpp
int x = 0;
```
