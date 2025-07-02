#include <iostream>
#include <fstream>
#include "cham.h"

int main() {
	std::ifstream in{ "testdata.txt" };
	if (not in) return 20250702;

	cham chams[22];
	int idx{ 0 };
	while (in >> chams[idx++]);
	for (const cham c : chams) {
		std::cout << c;
	}

}