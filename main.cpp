#include <iostream>
#include <fstream>
#include "cham.h"

int main() {
	std::ifstream in{ "testdata.txt" };
	if (not in) return 20250702;

	cham temp;
	in >> temp;

}