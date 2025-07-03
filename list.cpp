#include "list.h"

size_t list::size() {
	return s;
}

size_t list::capacity()
{
	return cap;
}

void list::push_back(const cham& rhs)
{
	memcpy(&data[s++], &rhs, sizeof(cham));
}

cham& list::operator[](int idx)
{
	return data[idx];
}
