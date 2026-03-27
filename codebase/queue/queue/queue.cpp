#include "queue.h"

Queue::Queue() {
    front = -1;
    rear = -1;
    count = 0;
}

bool Queue::is_empty()
{
    return (count == 0);
}

bool Queue::is_full() const {
    return (count == SIZE);
}

int Queue::get_count() const { return this->count; }