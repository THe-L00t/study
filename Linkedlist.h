#pragma once
#include "cham.h"
struct Lnode {
	cham data;
	Lnode* prev{ nullptr };
	Lnode* next{ nullptr };
};

class Linkedlist
{
public:
	~Linkedlist() {
		if (head != nullptr) {
			Lnode* temp{};
			do {
				temp = head->next;
				delete head;
				head = temp;
			} while (temp != nullptr);
			
		}
	}

	void push_back(const cham&);

	void print() const;
private:
	Lnode* head{ nullptr };
	Lnode* tail{ nullptr };
};

