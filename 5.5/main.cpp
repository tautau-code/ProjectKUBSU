


#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
	// ������ ��������� ����� � ������� ������� ��������
	setlocale(LC_ALL, "Rus");

	// ������ ������������ ������ �����, ���������� � ���,
	// ��� ������ ����� ����� ��������� ����������� �������� ����� ���� �����
	// � ��� ��� ����� ����� ��������������

	cout << "������� ���������� �����, ������� ����� ��������������:\t";
	
	// �������������� ����������, ������� ����� ����������� �������� ����� �����
	int countOfNumbers;
	cin >> countOfNumbers;
	cout << endl;

	// ���������� ������ ������ ��� ��������� ����� �����
	int number;

	// ���������� ������ ����� ������������������ ����� �����
	int sumOfNumbers = 0;

	cout << "������� �����, ������� ����� ��������������: " << endl;

	while (countOfNumbers > 0) {
		cin >> number;
		sumOfNumbers += number;
		countOfNumbers -= 1;
	}
	cout << endl;
	cout << "����� ��������� �����: " << sumOfNumbers << "!" << endl;

}