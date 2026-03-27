#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include "queue/queue/queue.h"

class CircularQueue : public Queue {
public:
    void enqueue(const int value) override;

    void dequeue() override;

    void show_queue() override;
};

#endif