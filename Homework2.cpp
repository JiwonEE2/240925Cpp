/*	240925 과제2
하노이탑 : 재귀함수 사용해서 구현하기
*/
#include<iostream>
using namespace std;
int Hanoi(int n) {
	if (n <= 1)return 1;
	return Hanoi(n - 1) * 2 + 1;
}

int main() {
	int res = Hanoi(5);

	cout << res << "\n";
}