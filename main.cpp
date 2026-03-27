#include <iostream>
#include "codebase/linked_list/single_linked_list/single_linked_list.h"
#include "codebase/queue/linear_queue/linear_queue.h"
#include "codebase/queue/circular_queue/circular_queue.h"
#include "codebase/stack/stack.h"

#define SIZE 29
using std::cout, std::cin, std::endl, std::string;

int main() {
    cout << "--Yığıt--\n";
    Stack stack = Stack();
    stack.push(5);
    stack.push(4);
    stack.show_stack();
    stack.pop();
    stack.show_stack();

    cout << "--Doğrusal Kuyruk--\n";
    LinearQueue l_queue = LinearQueue();
    l_queue.enqueue(32);
    l_queue.enqueue(76);
    l_queue.show_queue();
    l_queue.dequeue();
    l_queue.show_queue();

    cout << "--Dairesel Kuyruk--\n";
    auto c_queue = CircularQueue();
    c_queue.enqueue(4);
    c_queue.enqueue(16);
    c_queue.enqueue(64);
    c_queue.show_queue();

    cout << "--Tekli Bağlı Liste--\n";
    SingleLinkedList linked_list = SingleLinkedList();
    linked_list.push(-16);
    linked_list.push(-29);
    linked_list.show_linked_list();
    Node *n1 = linked_list.create_node(-34);
    Node *n2 = linked_list.create_node(-46);
    linked_list.push(n1);
    linked_list.push(n2);
    linked_list.show_linked_list();
    linked_list.insert_after(n1, -7);
    linked_list.show_linked_list();
    linked_list.delete_after(n2);
    linked_list.show_linked_list();

    return 0;
}