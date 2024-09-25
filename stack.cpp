/*
Stack
LIFO(LastInFirstOut) : 후입선출

- push : 스택에 새로운 요소를 추가하는 연산
- pop : 최상단 요소를 제거하고 반환
- top(Peek) : 스택의 최상단 요소를 반환
- Empty : 스택이 비어있는가?
*/
#include<iostream>
#include<assert.h>
using namespace std;

template<typename T>
class Stack {
	static const int MAX_VALUES = 5;
	int top;
	T value[MAX_VALUES];
public:
	Stack() :top(-1) {
		for (int i = 0; i < MAX_VALUES; ++i) {
			value[i] = T();
		}
	}
	void Push(T val) {
		// assert
		// 프로그램에서 치명적일 수 있는 문제에서 프로그램을 중단하고 오류를 표시
		// 프로그램을 중단시키고 오류를 표시하기 때문에 개발자의 디버깅에 용이
		assert(top + 1 < MAX_VALUES);	// 스택이 오버플로우 하지 않도록 확인

		value[++top] = val;
	}
	T Pop() {
		assert(!Empty());
		
		T val = value[top];		// 스택의 최상위 값을 임시로 저장하고
		value[top--] = T();

		return val;
	}
	T Top() {
		return value[top];
	}
	bool Empty()const {
		return top < 0;
	}
};

int main() {
	Stack<int>stack;
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.Push(30);
	stack.Push(30);

	cout << "top : " << stack.Top() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";
	cout << "Pop : " << stack.Pop() << "\n";

	cout << "top : " << stack.Top() << "\n";
}