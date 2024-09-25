#include "SLL.h"
using namespace std;

SLL::SLL() :pHead(nullptr) {}

SLL::~SLL()
{
	// �� �����Ͱ� �ƴ� ������ ���鼭
	while (pHead != nullptr) {
		// ���� ��带 ����Ű�� �����͸� �ӽ� ��忡 ����
		node* temp = pHead;
		// ���� ��带 ���� ���� ����
		pHead = pHead->pNext;
		// ���� ��带 ����
		delete temp;
	}
}

void SLL::Insert(int num)
{
	// ���ο� ��带 �����
	node* newNode = new node(num);
	// ���࿡ ��� �ִٸ�(��尡 ������)
	if (pHead == nullptr)
	{
		// ���ο� ��带 ù ���� ����
		pHead = newNode;
		return;
	}
	// �ƴϸ� ���鼭 ����
	else {
		// �̰ɷ� ����(����Ʈ�� ��ȸ)
		node* temp = pHead;

		// ����Ʈ�� ��ȸ�� ������ nullptr�� �ƴ� ������ ���鼭
		while (temp->pNext != nullptr)
		{ 
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	// ���� : ä���
	// ���� ��带 ����Ű�� ������
	node* temp1 = pHead;
	// ���� ��带 ����Ű�� ������
	node* temp2=temp1->pNext;
	// ù��° ��尡 �����Ϸ��� �����
	if (temp1->value == num) {
		// ��带 ���� ���� �̵���Ű��
		pHead = temp1->pNext;
		// ����
		delete temp1;
	}
	else {
		// ����Ʈ�� ���鼭 ������ ��带 ã�ƾ���
		while (temp2->value != num) {
			// ���� ��带 ���� ���� �̵�
			temp1 = temp1->pNext;
			// ���� ��带 �� ���� ���� �̵�
			temp2 = temp2->pNext;
			// ��ã���� ����
		}
		// ���� ��带 ���� ��忡 ����
		temp1->pNext = temp2->pNext;
		// ����
		delete temp2;
	}
}

void SLL::Print()
{
	node* temp = pHead;
	cout << "=========== ��� ============" << endl;

	while (temp != nullptr) {
		cout << temp->value << " ";
		temp = temp->pNext;
	}
}