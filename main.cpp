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
	cham chams[22];
	int idx{ 0 };
	while (in >> chams[idx++]);
	std::cout << "���� ��" << std::endl;
	for (const cham c : chams) {
		std::cout << c;
	}
	//1		chams[0] > chams[5];
	//2		chams[0].getHp() > chams[5].getHp();
	// chams[0].compHp(chams[5]);
}

