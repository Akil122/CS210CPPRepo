# Assignment 3 Reflection

## 1. Why does `LinkedList::deleteFront()` need two `delete` calls?

It needs two `delete` calls because two things were created with `new`. `delete doomed->data` deletes the value created in `main.cpp`, like `new int(10)`. `delete doomed` deletes the node created by `new Node<T>(value)` inside `addFront()`.

## 2. Why does `ArrayList` need a destructor now?

Before, the array stored regular values, so C++ cleaned them up automatically. Now it stores pointers to values created with `new`, so the destructor has to delete them. The code would still compile without the destructor, but it would cause a memory leak.

## 3. How do `search()` and `addFront()` treat pointers differently?

`addFront()` takes ownership of the pointer, which means the list has to delete it later. `search()` only checks the value and does not own or delete the pointer. That is why I can give `search()` the address of a regular variable like `key`.

## 4. How could I switch list types without changing `main.cpp`?

The `makeList()` factory function lets me choose between `LinkedList` and `ArrayList` in one place. Virtual functions and runtime polymorphism make the correct version of each method run. Both classes use the same `List<T>` interface, so `main.cpp` does not need to change.

## 5. Which keyword was important?

The `override` keyword was useful because it checks that my function matches the one in `List<T>`. For example, if I forgot `const` on `search()`, the compiler would tell me the method does not match. This makes small mistakes easier to find.
