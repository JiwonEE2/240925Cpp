/*	240925 ����2
�ϳ���ž : ����Լ� ����ؼ� �����ϱ�
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