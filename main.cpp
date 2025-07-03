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
	cham chams[22];
	int idx{ 0 };
	while (in >> chams[idx++]);
	std::cout << "정렬 전" << std::endl;
	for (const cham c : chams) {
		std::cout << c;
	}
	//1		chams[0] > chams[5];
	//2		chams[0].getHp() > chams[5].getHp();
	// chams[0].compHp(chams[5]);
}

