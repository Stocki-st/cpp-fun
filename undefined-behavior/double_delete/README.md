
# Double Delete

**Description:**

Deleting the same memory twice results in undefined behavior.

**Why it's UB:**

The C++ standard specifies that deleting already-deleted memory leads to undefined behavior.

**How to Fix:**

Set the pointer to `nullptr` after deleting it:

```cpp
delete ptr;
ptr = nullptr;
```
