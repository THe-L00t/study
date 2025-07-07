#pragma once
#include "cham.h" 
struct Tnode {
	cham data;
	Tnode* left{ nullptr };
	Tnode* right{ nullptr };
};

class Tree
{
public:

private:
	Tnode* root{ nullptr };
};

