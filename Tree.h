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
	~Tree() {
		if (root not_eq nullptr) {
			destroy(root);
			delete root;
		}
	}

	void push_back(const cham&);
	void print() const;

private:
	Tnode* root{ nullptr };

	void inpush(Tnode*&, const cham&);
	void inprint(Tnode*) const;
	void destroy(Tnode*&);
};

