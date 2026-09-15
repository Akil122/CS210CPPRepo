# Error Log

## September 14, 2026 — Wrong Return Type for `pop`

### Exact error

    Stack.cpp:15:13: error: return type of out-of-line definition of 'Stack::pop' differs from that in the declaration

### Cause

I changed `pop()` in `Stack.h` from a `void` function to a function that returns an `int`, but `Stack.cpp` still had the old `void Stack::pop()` definition. The declaration and definition did not have the same return type.

### Fix

I changed the definition to `int Stack::pop()`. My function now saves the top value, decreases `topIndex`, and returns the removed value.

## September 14, 2026 — Old `top()` Function in Main

### Exact error

    main.cpp:18:31: error: no member named 'top' in 'Stack'; did you mean 'pop'?

### Cause

The original `main.cpp` called `s.top()`, but the required assignment interface uses `peek()` instead of `top()`.

### Fix

I replaced the calls to `top()` with `peek()`. After fixing the driver, the program compiled and showed the correct top values.