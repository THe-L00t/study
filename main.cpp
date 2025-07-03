/*
자료구조 클래스
1. 배열(동적)
2. 리스트
3. 트리

new delete

생성자, 데이터 삽입, 삭제(이론)
클래스 내부함수 정렬함수 두 가지 구현(분할 정복 1, n^2 1)
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
	std::cout << "정렬전" << std::endl;

	cl.selectionSort();

	for (size_t i = 0; i < cl.size(); i++)
	{
		std::cout << cl[i];
	}
}

