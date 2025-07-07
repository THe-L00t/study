#include <iostream>
#include "Linkedlist.h"

void Linkedlist::push_back(const cham& c) {
	if (head == nullptr) {
		head = new Lnode;
		head->data = c;
		tail = head;
	}
	else {
		tail->next = new Lnode;
		Lnode* temp = tail;
		tail = tail->next;
		tail->prev = temp;
		tail->data = c;
	}
}

void Linkedlist::print() const
{
	for (Lnode* t = head; t != nullptr; t = t->next) {
		std::cout << t->data;
	}
}
