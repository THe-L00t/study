#pragma once
#include <iostream>
#include <string>
class cham
{
public:
	//����Լ�


	friend std::istream& operator>>(std::istream& is, cham& c) {
		return is >> c.name >> c.hp >> c.mp >> c.speed >> c.range >> c.pos;
	}

private: 
	//�������
	std::string name;
	int hp, mp, speed, range;
	std::string pos;
};

