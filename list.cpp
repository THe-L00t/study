#include "List.h"

size_t List::size() {
	return s;
}

size_t List::capacity()
{
	return cap;
}

void List::push_back(const cham& rhs)
{
	if (cap <= s) {
		cap = cap*2;
		cham* temp = new cham[cap];
		memcpy(temp, data, sizeof(cham) * s);
		delete[] data;
		data = temp;
	}
	memcpy(&data[s++], &rhs, sizeof(cham));
}

void List::selectionSort()
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

void List::quickSort()
{
	quick(0, s-1);
}

cham& List::operator[](int idx)
{
	return data[idx];
}

void List::quick(const size_t& start, const size_t& end)
{
	if (start >= end || end > s) return ;
	size_t low{ start + 1 }, high{ end };
	cham& pivot{ data[start] };
	while (not(low > high)) {
		if (not (data[low] > pivot)) {
			low++;
		}

		if (not (data[high] < pivot)) {
			high--;
		}

		if ((data[low] > pivot) && (data[high] < pivot) && high > low) {
			cham temp = data[low];
			data[low] = data[high];
			data[high] = temp;
			
		}
	}
	cham temp = pivot;
	pivot = data[high];
	data[high] = temp;

	if(start not_eq high-1) quick(start, high - 1);
	if(high+1 not_eq end)quick(high + 1, end);
}
