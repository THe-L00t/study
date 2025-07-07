#include "Tree.h"

void Tree::push_back(const cham& c) {
	inpush(root, c);
}

void Tree::print() const {
	inprint(root);
}

void Tree::inpush(Tnode*& n, const cham& c)
{
	if (n == nullptr) {
		n = new Tnode;
		n->data = c;
	}
	else {
		if (c < n->data) {
			inpush(n->left, c);
		}
		else {
			inpush(n->right, c);
		}
	}
}

void Tree::inprint(Tnode* n) const
{

	if(n->left != nullptr) inprint(n->left);
	std::cout << n->data;
	if(n->right != nullptr) inprint(n->right);
}
