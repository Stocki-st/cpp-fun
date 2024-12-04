
# Signed Integer Overflow

**Description:**

Overflowing a signed integer results in undefined behavior.

**Why it's UB:**

The C++ standard does not define the result of signed integer overflow.

**How to Fix:**

Use unsigned integers if overflow is acceptable, or check for overflow:

```cpp
if (x < INT_MAX) {
    ++x;
}
```
