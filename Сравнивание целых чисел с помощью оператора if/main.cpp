//����������� ����� ����� � ������� ��������� if 
//�������� ��������� � ���������

#include <iostream> //��������� ��������� ����������� ���� � �����


using std::cout;	//��������� ���������� cout
using std::cin;		//��������� ���������� cin
using std::endl;	//��������� ���������� endl

//������� main �������� ���������� ��������� 
int main() {
	int num1; //������ �� ������������ �����
	int num2; //������ �� ������������ �����

	cout << "Enter two integers to compare:  "; //��������� ����
	cin >> num1 >> num2; //��������� ��� ��������� �����

	if (num1 == num2)
		cout << num1 << " == " << num2 << endl;
	if (num1 != num2)
		cout << num1 << " != " << num2 << endl;
	if (num1 < num2)
		cout << num1 << " < " << num2 << endl;
	if (num1 > num2)
		cout << num1 << " > " << num2 << endl;
	if (num1 <= num2)
		cout << num1 << " <= " << num2 << endl;
	if (num1 >= num2)
		cout << num1 << " >= " << num2 << endl;
}