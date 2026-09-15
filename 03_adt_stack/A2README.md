# Assignment 2: Array-Backed Stack

This program makes a stack using an array that can hold 100 integers. It includes functions to push, pop, peek, check if the stack is empty or full, and return its size.

## Reflection Questions

### 1. What value does `topIndex` hold immediately after construction?

My constructor sets `topIndex` to `-1`. This shows that the stack does not have any values yet. My `isEmpty()` function checks if `topIndex` equals `-1`, so it returns true right after the stack is created.

### 2. How does `push` work step by step?

My `push` function first checks if the stack is full. If it is full, it prints `Stack is full.` and stops. If there is room, it increases `topIndex` by one and stores `value` in `data[topIndex]`.

The order is important because `topIndex` starts at `-1`. If I stored the value first, the program would try to use `data[-1]`, which is not a valid spot in the array.

### 3. What are the time complexities?

* `push` is O(1) because it checks if the stack is full, changes `topIndex`, and stores one value.
* `pop` is O(1) because it checks if the stack is empty, gets one value, and decreases `topIndex`.
* `peek` is O(1) because it checks if the stack is empty and returns one value.
* `isEmpty` is O(1) because it only compares `topIndex` to `-1`.
* `isFull` is O(1) because it only compares `topIndex` to `99`.
* `size` is O(1) because it only returns `topIndex + 1`.

None of my functions need to go through the entire array.

### 4. What happens when `push` is called on a full stack?

My `push` function prints `Stack is full.` and returns without adding the value. Since `push` is a `void` function, it does not return a value. `topIndex` stays at `99`, and the stack does not change. I chose this behavior to prevent the program from writing past the end of the array.

### 5. What happens when `pop` or `peek` is called on an empty stack?

Both functions print `Stack is empty.` and return `-1`. `topIndex` stays at `-1`, so the stack does not change. I used `-1` because the assignment does not allow exceptions. However, `-1` could also be a real value in the stack, so the printed message makes the error clear.

### 6. What would change if the caller needed more than 100 spaces?

I could make the fixed array larger and change the number used by `isFull()`. The functions would still be O(1), but the stack would still have a fixed limit.

For the stack to grow automatically, I would need dynamic memory and resizing. A resize would have to copy the old values into a larger space, so that push could take O(n). Normal pushes that do not resize would still take O(1).

### 7. What would change with a linked-list stack?

One advantage of a linked list is that the stack could grow instead of having a limit of 100 values. One disadvantage is that each value would also need a pointer. Working with nodes and pointers would also make the code more complicated.
