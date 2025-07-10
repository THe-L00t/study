#pragma once
#include "cham.h"
class List
{
public:
	List() {
		data = new cham[cap];
	}
	List(size_t c) 
		:cap{c} {
		data = new cham[cap];
	}
	~List() {
		if (data not_eq nullptr) delete[] data;
	}

	size_t size();
	size_t capacity();

	virtual void push_back(const cham&);
	void selectionSort();
	void quickSort();

	cham& operator[](int idx);

protected:
	cham* data{};
	size_t s{};
	size_t cap{10};

	void quick(const size_t&, const size_t&);
};

