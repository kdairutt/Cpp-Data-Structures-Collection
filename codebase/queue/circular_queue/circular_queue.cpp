#include "circular_queue.h"
#include <iostream>

using std::cout, std::endl;
    void CircularQueue::enqueue(const int value) {
        if ((rear + 1) % SIZE == front)
            return;
        if (is_empty())
            rear = front = 0;
        else
            rear = (rear + SIZE) % SIZE;
        list[rear] = value;
        count++;
    }

    void CircularQueue::dequeue() {
        if (is_empty()) return;
        if (front == rear)
            rear = front = -1;
        else
            front = (front + SIZE) % SIZE;
        count--;
    }

    void CircularQueue::show_queue() {
        if (!is_empty()) {
            int temp_rear = rear;
            while(temp_rear != front) {
                cout << list[temp_rear] << ", ";
                temp_rear = (temp_rear + SIZE) % SIZE;
            }
        }
        else cout << "Kuyruk boş.";
    }