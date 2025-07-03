#pragma once
#include "cham.h"
class list
{
public:
	list() = default;
	list(size_t c) 
		:cap{c} {
		data = new cham[cap];
	}
	~list() {
		if (data not_eq nullptr) delete[] data;
	}

	size_t size();
	size_t capacity();

	void push_back(const cham&);
	void selectionSort();

	cham& operator[](int idx);

private:
	cham* data{};
	size_t s{};
	size_t cap{};
};

