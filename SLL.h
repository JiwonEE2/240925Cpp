#pragma once
#include<iostream>
struct node {
	int value;	// ������
	node* pNext;	// ��带 ����ų �� �ִ� ������

	node(int n) :value(n), pNext(nullptr) {}
};

// SLL Class
class SLL
{
	// SLL�� ù ��° ��带 ����Ű�� ������
	node* pHead;
public:
	SLL();
	~SLL();

	void Insert(int num);
	void Delete(int num);
	void Print();
};