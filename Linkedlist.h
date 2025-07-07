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

private:
	Lnode* head{ nullptr };
	Lnode* tail{ nullptr };
};

