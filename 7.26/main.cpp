// ������������ ������� vector ����������� ���������� C++

#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>

void outputVector(const vector<int>&); // ������� ������
void inputVector(vector<int>&); //������ �������� � ������

int main()
{
	vector<int> integers1(7); // 7-���������� vector<int>
	vector<int> integers2(10); // 10-���������� vector<int>

	// ���������� ������ � ���������� integers1
	cout << "Size of vector integers1 is " << integers1.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers1);

	// ���������� ������ � ���������� integers2
	cout << "Size of vector integers2 is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers2);

	// ������ � ���������� integers1 � integers2
	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	// ��������� � �������� vector �������� ����������� (!=)
	cout << "\nEvaluating: integers1 != integers2" << endl;
	if (integers1 != integers2)
	{
		cout << "integers1 and integers2 are not equal" << endl;
	}

	// ������� ������ integers3, ��������� � �������� ��������������
	// integers1; ���������� ������ � ���������� integers3
	vector<int> integers3(integers1); // ����������� �����

	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers3);

	// ��������� � �������� vector �������� ������������ (=)
	cout << "\nAssignin integers2 to integers1:" << endl;
	integers1 = integers2; // integers1 ������, ��� integers2

	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2" << endl;
	outputVector(integers2);

	// ��������� � ������� vector �������� ��������� (==)
	cout << "\nEvaluating: integers1 == integers2" << endl;
	if (integers1 == integers2)
	{
		cout << "integers1 and integers2 are equal" << endl;
	}
	
	// ������������ ���������� ������ ��� ����������� rvalue
	cout << "\nintegers1[5] is " << integers1[5];

	// ������������ ���������� ������ ��� ����������� lvalue
	cout << "\n\nAssigning 1000 to integers[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	// ������� �������� ������� ��� ���������
	cout << "\nAttemp to assign 1000 to integers1.at(15)" << endl;
	integers1.at(15) = 1000; // ������: ����� �� ���������

	return 0;
}

//������� ���������� �������
void outputVector(const vector<int>& array)
{
	size_t i; // �������� ����������� ����������

	for (i = 0; i < array.size(); i++)
	{
		cout << setw(12) << array[i];

		if ((i + 1) % 4 == 0) //�� 4 ����� � ������ ������
			cout << endl;
	}
	if (i != 0)
		cout << endl;
}

void inputVector(vector<int>& array)
{
	for (size_t i = 0; i < array.size(); i++)
	{
		cin >> array[i];
	}
}