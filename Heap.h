#pragma once
#include "List.h"
class Heap : public List
{
//public:
//
//	size_t size();
//	size_t capacity();
//
//	void push_back(const cham&);
//	void selectionSort();
//	void quickSort();
//
//	cham& operator[](int idx);
//
//private:
//	cham* data{};
//	size_t s{};
//	size_t cap{};
//
//	void quick(const size_t&, const size_t&);
public:
	void push_back(const cham&) override;
	const cham& outSort();
private:
	size_t dim{};
	void hCom(int);
	void heap();
};

/*
public
�ܺο��� ���� ����
private
�ܺο��� ���� �Ұ���

protected
�ڽ� Ŭ���������� ���� �����ϳ�, �ܺο����� ���� �Ұ��� 

animal ū ����
	^
	|
Dog ���� ����


�Ϲ� �迭
�� �迭, ����

99 80 60 40 36 55 53

(2*n) (2*n +1)
*/