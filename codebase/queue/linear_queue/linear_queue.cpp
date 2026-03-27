#include "linear_queue.h"
#include <iostream>

using std::cout, std::endl;

void LinearQueue::enqueue(const int value) {
    if (is_full())
        return;
    if (is_empty())
        front = 0;
    list[++rear] = value;
    count++;
}

void LinearQueue::dequeue() {
    if (is_empty())
        return;
    if (rear == front) {
        rear = -1;
        front = -1;
    }
    else {
        front++;
    }
    count--;
}

void LinearQueue::show_queue() {
    if (!is_empty()) {
    for (int i = front; i <= rear; i++)
            cout << list[i] << ", ";
        cout << endl;
    }
    else cout << "Kuyruk boş.";
}