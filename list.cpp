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

void list::selectionSort()
{
	for (size_t i = 0; i < s; ++i)
	{
		cham* min = &data[i];
		for (size_t j = i+1; j < s; ++j)
		{
			if (data[j] < *min) {
				min = &data[j];
			}
		}
		if (*min != data[i]) {
			cham temp = data[i];
			data[i] = *min;
			*min = temp;
		}
	}
}

cham& list::operator[](int idx)
{
	return data[idx];
}
