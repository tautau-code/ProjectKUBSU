#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "������� �����, ������� �������� ������� ����� �����, 9999 ��� ��������� �����: " << endl;
	
	int number = 0;
	double average = 0;

	while ( number != 9999) {
		
		cin >> number;
		if (number == 9999) {
			break;
		}
		else
		{
			average = (average + (double)number) / 2;
		}
		
	}

	cout << "������� �������� ��������� ����� ����� " << average << "!" << endl;

	return 0;
}