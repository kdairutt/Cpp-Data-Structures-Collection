#include "single_linked_list.h"
#include <iostream>
using std::cout, std::endl;


SingleLinkedList::SingleLinkedList() {
    head = nullptr;
}

SingleLinkedList::~SingleLinkedList() {
    while (head != nullptr) {
        pop();
    }
}

Node* SingleLinkedList::create_node(int value) {
    Node *node = new Node;
    node->data = value;
    node->next = nullptr;
    return node;
}

void SingleLinkedList::push(const int value) {
    Node *p = create_node(value);
    p->next = head;
    head = p;
}

void SingleLinkedList::push(Node *node) {
    node->next = head;
    head = node;
}

void SingleLinkedList::pop() {
    if (head == nullptr)
        return;
    Node *p = head;
    head = p->next;
    delete p;
}

void SingleLinkedList::show_linked_list() const {
    const Node *display_node = head;
    while (display_node != nullptr) {
        cout << display_node->data << ", ";
        display_node = display_node->next;
    }
    cout << endl;
}

void SingleLinkedList::insert_after(Node *p, const int value) {
    if (p == nullptr)
        return;
    Node *q = create_node(value);
    q->next = p->next;
    p->next = q;
}

void SingleLinkedList::delete_after(Node *p) {
    if (p == nullptr)
        return;
    const Node *q = p->next;
    p->next = q->next;
    delete q;
}

