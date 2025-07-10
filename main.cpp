/*
	힙
	- 배열
	- 트리

*/
#include <iostream>
#include <fstream>
#include "List.h"
#include "Linkedlist.h"
#include "Tree.h"
#include "Heap.h"
#include "cham.h"

int main() {
	std::ifstream in{ "testdata.txt" };
	if (not in) return 20250702;

	List l;
	Heap h;
	cham temp;
	while (in >> temp) {
		h.push_back(temp);
	}
	int ls = h.size();
	for (size_t i = 0; i < 22; i++)
	{
		l.push_back(h.outSort());
	}
	for (size_t i = 0; i < l.size(); i++)
	{
		std::cout << l[i];
	}
}

