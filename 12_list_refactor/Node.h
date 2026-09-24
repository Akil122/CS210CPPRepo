//
// Created by Akil Shaik on 9/17/26.
//

# pragma once
#include <iostream>
#include <ostream>

template <typename T>
class Node {
public:
    T:value;
    Node<T> *next;

    Node(T * value) {
        this->value=value;
        this->next=nullptr;
    }
    void print() {
        cout<<value<<endl;
    }
};
