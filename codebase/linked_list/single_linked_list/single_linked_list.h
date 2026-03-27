#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

struct Node {
    int data;
    Node *next;
};

class SingleLinkedList {
private:
    Node *head;

public:
    SingleLinkedList();

    ~SingleLinkedList();

    static Node *create_node(int value);

    void push(const int value);

    void push(Node *node);

    void pop();

    void show_linked_list() const;

    static void insert_after(Node *p, const int value);

    static void delete_after(Node *p);
};

#endif
