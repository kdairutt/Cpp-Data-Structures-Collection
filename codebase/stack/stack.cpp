#include <iostream>
#include "stack.h"

using std::cout, std::endl;

Stack::Stack() {
    this->top = -1;
}

void Stack::push(const int value) {
    this->top++;
    Stack::list[top] = value;
}

void Stack::pop() {
    if (top == -1)
        return;
    this-top--;
}

int Stack::get_top() const {
    return this->top;
}

int Stack::peek() const {
    return list[top];
}

bool Stack::is_empty() const {
    return this->top == -1;
}

void Stack::show_stack() const {
    if (!is_empty()) {
        for (int i = 0; i <= top; i++)
            cout << list[i] << ", ";
        cout << endl;
    }
    else cout << "Yığıt boş.";
}
