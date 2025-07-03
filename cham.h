#pragma once
#include <iostream>
#include <string>
#include <print>

class cham
{
public:
	//¸â¹öÇÔ¼ö






	bool operator<(const cham& other) const;
	bool operator>(const cham& other) const;
	bool operator==(const cham& other) const;

	friend std::istream& operator>>(std::istream& is, cham& c) {
		return is >> c.name >> c.hp >> c.mp >> c.speed >> c.range >> c.pos;
	}
	friend std::ostream& operator<<(std::ostream& os, const cham& c) {
		std::print(os, "{:<11}{:<5}{:<5}{:<4}{:<3}{:<8}\n", c.name, c.hp, c.mp, c.speed, c.range, c.pos);
		return os;
	}

private: 
	//¸â¹öº¯¼ö
	std::string name;
	int hp, mp, speed, range;
	std::string pos;
};

