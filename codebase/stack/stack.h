#ifndef STACK_H
#define STACK_H

//çok sevdiğim bir asal sayı

#define SIZE 29

class Stack {
private:
    int list[SIZE];
    int top;

public:
    Stack();
    void push(const int);
    void pop();
    int get_top() const;
    int peek() const;
    bool is_empty() const;
    void show_stack() const;
};

#endif
