/*
�ڷᱸ�� Ŭ����
1. �迭(����)
2. ����Ʈ
3. Ʈ��

new delete

������, ������ ����, ����(�̷�)
Ŭ���� �����Լ� �����Լ� �� ���� ����(���� ���� 1, n^2 1)
*/
#include <iostream>
#include <fstream>
#include "list.h"
#include "cham.h"

int main() {
	std::ifstream in{ "testdata.txt" };
	if (not in) return 20250702;

	list cl(22);
	cham temp;

	int idx{ 0 };
	while (in >> temp) {
		cl.push_back(temp);
	}

	for (size_t i = 0; i < cl.size(); i++)
	{
		std::cout << cl[i];
	}
	std::cout << "������" << std::endl;

	cl.selectionSort();

	for (size_t i = 0; i < cl.size(); i++)
	{
		std::cout << cl[i];
	}
}

