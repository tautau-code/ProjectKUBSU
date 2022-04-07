// ƒемонстраци€ шаблона vector стандартной библиотеки C++

#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>

void outputVector(const vector<int>&); // вывести вектор
void inputVector(vector<int>&); //ввести значение в вектор

int main()
{
	vector<int> integers1(7); // 7-элементный vector<int>
	vector<int> integers2(10); // 10-элементный vector<int>

	// напечатать размер и содержимое integers1
	cout << "Size of vector integers1 is " << integers1.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers1);

	// напечатать размер и содержимое integers2
	cout << "Size of vector integers2 is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers2);

	// ввести и напечатать integers1 и integers2
	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	// применить к объектам vector операцию неравенства (!=)
	cout << "\nEvaluating: integers1 != integers2" << endl;
	if (integers1 != integers2)
	{
		cout << "integers1 and integers2 are not equal" << endl;
	}

	// создать вектор integers3, использу€ в качестве инициализатора
	// integers1; напечатать размер и содержимое integers3
	vector<int> integers3(integers1); // конструктор копии

	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers3);

	// применить к объектам vector операцию присваивани€ (=)
	cout << "\nAssignin integers2 to integers1:" << endl;
	integers1 = integers2; // integers1 больше, чем integers2

	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2" << endl;
	outputVector(integers2);

	// применить к объекту vector операцию равенства (==)
	cout << "\nEvaluating: integers1 == integers2" << endl;
	if (integers1 == integers2)
	{
		cout << "integers1 and integers2 are equal" << endl;
	}
	
	// использовать квадратные скобки дл€ образовани€ rvalue
	cout << "\nintegers1[5] is " << integers1[5];

	// использовать квадратные скобки дл€ образовани€ lvalue
	cout << "\n\nAssigning 1000 to integers[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	// попытка указани€ индекса вне диапазона
	cout << "\nAttemp to assign 1000 to integers1.at(15)" << endl;
	integers1.at(15) = 1000; // ќЎ»Ѕ ј: выход из диапазона

	return 0;
}

//вывести содержимое вектора
void outputVector(const vector<int>& array)
{
	size_t i; // объ€вить управл€ющую переменную

	for (i = 0; i < array.size(); i++)
	{
		cout << setw(12) << array[i];

		if ((i + 1) % 4 == 0) //по 4 числа в строке вывода
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