#ifndef LIST_H__
#define LIST_H__

typedef unsigned long Item;

class List {
    struct node {
        Item item;
        node *next;
    };

    int size1;
    int capacity;
    node *tail;
    node *head;

public:
    List(int capacity = 10);
    ~List();
    int size();
    void add(Item);
    bool isEmpty();
    void visit(void (*pf)(Item &));
};

#endif 