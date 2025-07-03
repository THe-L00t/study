#include "list.h"

void list::push_back(const cham& rhs)
{
	memcpy(&data[size++], &rhs, sizeof(cham));
}
