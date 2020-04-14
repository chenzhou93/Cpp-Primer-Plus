#include "Exercise_08_list.h"
#include <iostream>
List::List(int capacity) {
    this->capacity = capacity;
    this->size1 = 0;
    this->head = new node;
    this->tail = this->head;
}

List::~List() {
    if (this->size1 == 0) {
        delete this->head;
    }

    node *current = this->head;

    while (current != 0) {
        node *next = current->next;
        delete current;
        current = next;
    }
}

int List::size() {
    return this->size1;
}

bool List::isEmpty() {
    return this->size1 == 0;
}

void List::add(Item item) {
    if (this->size1 < this->capacity) {

        if (this->size1 > 0) {
            this->tail->next = new node;
            this->tail = this->tail->next;
        }

        this->tail->item = item;

        this->size1++;
    }
}

void List::visit(void (*pf)(Item &)) {
    if (this->size1 > 0) {
        node current = *this->head;

        for (int i = 0; i < this->size1; i++) {
            (*pf)(current.item);

            if (current.next != nullptr) {
                current = *current.next;
            }
        }
    }
}


