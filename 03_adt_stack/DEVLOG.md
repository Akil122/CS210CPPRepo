# Development Log

## September 14, 2026 — Stack Interface

I replaced the original vector-based interface with the required fixed-array interface. I added the constructor, `push`, `pop`, `peek`, `isEmpty`, `isFull`, and `size` declarations. I also added `data[100]` and `topIndex` as private variables.

I decided to use `topIndex = -1` for an empty stack because array positions begin at 0. If I did this again, I would check more carefully that all of the old header code was removed before committing.

## September 14, 2026 — Basic Stack Operations

I implemented the constructor, `isEmpty`, `isFull`, `size`, and `push`. I made `push` print `Stack is full.` and stop when the array is full. I chose this behavior because exceptions were not allowed and I needed to prevent the program from writing outside `data[100]`.

If I did this again, I would compile after adding each function so I could find mistakes earlier.

## September 14, 2026 — Pop, Peek, and Testing

I implemented `pop` and `peek`. When the stack is empty, both functions print `Stack is empty.` and return `-1`. I chose the same behavior for both functions to keep the class consistent.

I updated `main.cpp` to test pushing, popping, peeking, size, and the empty and full cases. If I did this differently, I might use a separate testing function to keep `main` shorter.