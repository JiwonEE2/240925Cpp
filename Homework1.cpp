/*	240925 과제1
재귀함수로 피보나치 수열 구현하기
1	1	2	3	5	8
a0	a1	a2	a3	a4	a5
매개변수는 원하는 항의 수(int 3 -> 2)
*/
#include<iostream>
using namespace std;
int Fibonacci(int n) {
	if (n <= 1)return 1;
	return Fibonacci(n-2) + Fibonacci(n - 1);
}

int main() {
	int res = Fibonacci(5);

	cout << res << "\n";
}