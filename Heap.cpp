#include "Heap.h"
#include <cmath>

void Heap::push_back(const cham& c)
{
	
	if (cap <= s) {
		cap = cap*2;
		cham* temp = new cham[cap];
		memcpy(temp, data, sizeof(cham) * s);
		delete[] data;
		data = temp;
	}
	memcpy(&data[s++], &c, sizeof(cham));
	dim = log2(s);
	heap();

}

const cham& Heap::outSort()
{
	if (s not_eq 1) {
		cham temp;
		memcpy(&temp, &data[s - 1], sizeof(cham));
		memcpy(&data[s - 1], &data[0], sizeof(cham));
		memcpy(&data[0], &temp, sizeof(cham));
	}
	s--;
	dim = log2(s);
	heap();
	return data[s];
}

void Heap::hCom(int n)
{
	if (n % 2 == 1) {
		if (data[n] > data[(n - 1) / 2]) {
			cham temp;
			memcpy(&temp, &data[n], sizeof(cham));
			memcpy(&data[n], &data[(n - 1) / 2], sizeof(cham));
			memcpy(&data[(n - 1) / 2], &temp, sizeof(cham));
		}
	}
	else {
		if (data[n] > data[n -2/ 2]) {
			cham temp;
			memcpy(&temp, &data[n], sizeof(cham));
			memcpy(&data[n], &data[(n -2)/ 2], sizeof(cham));
			memcpy(&data[(n -2)/ 2], &temp, sizeof(cham));
		}
	}
}

void Heap::heap()
{
	if (s <= 1) return;
	for (size_t i = 0; i <= dim; i++)
	{
		for (size_t j = 1; j < s; j++)
		{
			hCom(j);
		}
	}
}
