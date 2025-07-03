#pragma once
#include "cham.h"
class list
{
public:
	list() = default;
	list(int c) 
		:capacity{c} {

	}
	~list() {
		if (data not_eq nullptr) delete[] data;
	}
private:
	cham* data{};
	int size{};
	int capacity{};
};

