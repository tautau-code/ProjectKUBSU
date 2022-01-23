//сравнивание целых чисел с помощью оператора if 
//операции отношения и равенства

#include <iostream> //позволяет программе производить ввод и вывод


using std::cout;	//программа использует cout
using std::cin;		//программа использует cin
using std::endl;	//программа использует endl

//функция main начинает исполнение программы 
int main() {
	int num1; //первое из сравниваемых чисел
	int num2; //второе из сравниваемых чисел

	cout << "Enter two integers to compare:  "; //запросить ввод
	cin >> num1 >> num2; //прочитать два введенных числа

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