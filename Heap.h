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
외부에서 접근 가능
private
외부에서 접근 불가능

protected
자식 클래스에서는 접근 가능하나, 외부에서는 접근 불가능 

animal 큰 범위
	^
	|
Dog 작은 범위


일반 배열
힙 배열, 정렬

99 80 60 40 36 55 53

(2*n) (2*n +1)
*/