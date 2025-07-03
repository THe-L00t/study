#pragma once
#include "cham.h"
class list
{
public:
	list() = default;
	list(size_t c) 
		:capacity{c} {
		data = new cham[capacity];
	}
	~list() {
		if (data not_eq nullptr) delete[] data;
	}

	void push_back(const cham&);



private:
	cham* data{};
	size_t size{};
	size_t capacity{};
};

