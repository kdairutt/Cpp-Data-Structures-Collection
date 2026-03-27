#ifndef QUEUE_H
#define QUEUE_H

#define SIZE 29

class Queue {
protected:
    int front;
    int rear;
    int count;
    int list[SIZE];
public:
    virtual ~Queue() = default;

    Queue() {
        front = -1;
        rear = -1;
        count = 0;
    }

    virtual void enqueue(int value) = 0;

    virtual void dequeue() = 0;

    bool is_empty();

    bool is_full() const;

    int get_count() const;

    virtual void show_queue() = 0;
};

#endif