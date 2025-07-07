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

	}


	void push_back(const cham&);

	void print() const;
private:
	Lnode* head{ nullptr };
	Lnode* tail{ nullptr };
};

