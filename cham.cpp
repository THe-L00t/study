#include "cham.h"

bool cham::operator<(const cham& other) const
{
	return hp < other.hp;
}

bool cham::operator>(const cham& other) const
{
	return hp > other.hp;
}

bool cham::operator==(const cham& other) const 
{
	if (name == other.name && hp == other.hp && mp == other.mp && range == other.range
		&& speed == other.speed && pos == other.pos) return true;
	else return false;
}
