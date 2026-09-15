#include <iostream>
#include "Stack.h"

int main() {
    Stack stack;

    std::cout << "Initially empty: "
              << (stack.isEmpty() ? "yes" : "no") << std::endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Size after pushes: " << stack.size() << std::endl;
    std::cout << "Top value: " << stack.peek() << std::endl;

    std::cout << "Popped value: " << stack.pop() << std::endl;
    std::cout << "New top value: " << stack.peek() << std::endl;
    std::cout << "Size after pop: " << stack.size() << std::endl;

    stack.pop();
    stack.pop();

    int emptyResult = stack.pop();
    std::cout << "Empty pop returned: " << emptyResult << std::endl;

    Stack fullStack;

    for (int i = 1; i <= 100; i++) {
        fullStack.push(i);
    }

    fullStack.push(101);
    std::cout << "Full stack size: " << fullStack.size() << std::endl;
    std::cout << "Is full: "
              << (fullStack.isFull() ? "yes" : "no") << std::endl;

    return 0;
}