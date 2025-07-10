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
#include "cham.h"

int main() {
	std::ifstream in{ "testdata.txt" };
	if (not in) return 20250702;

	//List cl(22);
	//cham temp;

	//int idx{ 0 };
	//while (in >> temp) {
	//	cl.push_back(temp);
	//}

	//for (size_t i = 0; i < cl.size(); i++)
	//{
	//	std::cout << cl[i];
	//}
	//std::cout << "정렬전" << std::endl;

	//cl.quickSort();

	//for (size_t i = 0; i < cl.size(); i++)
	//{
	//	std::cout << cl[i];
	//}

	/*Linkedlist chams;

	cham temp;
	while (in >> temp) {
		chams.push_back(temp);
	}

	chams.print();*/

	Tree chams;

	cham temp;
	while (in >> temp) {
		chams.push_back(temp);
	}

	chams.print();
}

