#ifndef LINEAR_QUEUE_H
#define LINEAR_QUEUE_H

#include "queue/queue/queue.h"

class LinearQueue : public Queue {
public:
    void enqueue(const int value) override;

    void dequeue() override;

    void show_queue() override;
};

#endif