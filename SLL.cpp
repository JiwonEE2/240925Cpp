#include "SLL.h"
using namespace std;

SLL::SLL() :pHead(nullptr) {}

SLL::~SLL()
{
	// 널 포인터가 아닐 때까지 돌면서
	while (pHead != nullptr) {
		// 현재 노드를 가리키는 포인터를 임시 노드에 저장
		node* temp = pHead;
		// 다음 노드를 현재 노드로 설정
		pHead = pHead->pNext;
		// 이전 노드를 삭제
		delete temp;
	}
}

void SLL::Insert(int num)
{
	// 새로운 노드를 만들고
	node* newNode = new node(num);
	// 만약에 비어 있다면(헤드가 없으면)
	if (pHead == nullptr)
	{
		// 새로운 노드를 첫 노드로 설정
		pHead = newNode;
		return;
	}
	// 아니면 돌면서 연결
	else {
		// 이걸로 돌림(리스트를 순회)
		node* temp = pHead;

		// 리스트를 순회할 포인터 nullptr이 아닐 때까지 돌면서
		while (temp->pNext != nullptr)
		{ 
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	// 과제 : 채우기
	// 현재 노드를 가리키는 포인터
	node* temp1 = pHead;
	// 다음 노드를 가리키는 포인터
	node* temp2=temp1->pNext;
	// 첫번째 노드가 삭제하려는 노드라면
	if (temp1->value == num) {
		// 헤드를 다음 노드로 이동시키고
		pHead = temp1->pNext;
		// 삭제
		delete temp1;
	}
	else {
		// 리스트를 돌면서 삭제할 노드를 찾아야함
		while (temp2->value != num) {
			// 현재 노드를 다음 노드로 이동
			temp1 = temp1->pNext;
			// 다음 노드를 그 다음 노드로 이동
			temp2 = temp2->pNext;
			// 못찾으면 종료
		}
		// 이전 노드를 다음 노드에 연결
		temp1->pNext = temp2->pNext;
		// 삭제
		delete temp2;
	}
}

void SLL::Print()
{
	node* temp = pHead;
	cout << "=========== 출력 ============" << endl;

	while (temp != nullptr) {
		cout << temp->value << " ";
		temp = temp->pNext;
	}
}