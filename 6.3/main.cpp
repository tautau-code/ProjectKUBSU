#include <iostream>
using std::cout;
using std::endl;

int cube(int y); // �������� �������

int main() {
	//6.6
	register int count = 0;
	static double lastVal;

	int x;

	for (x = 1; x <= 10; x++) { // ��������� 10 ���
		cout << cube(x) << endl;// ��������� � ������� ��� x
	}

	return 0; // �������� ����������
}

int cube(int y) {
	return y * y * y;
}

