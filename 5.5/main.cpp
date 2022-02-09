


#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
	// Делаем возможным вывод в консоль русских символов
	setlocale(LC_ALL, "Rus");

	// Просим пользователя ввести числа, информируя о том,
	// что первое число будет считаться количеством вводимых после него чисел
	// и что эти числа будут просуммированы

	cout << "Введите количество чисел, которые нужно просуммировать:\t";
	
	// Инициализируем переменную, которая будет количеством вводимых далее чисел
	int countOfNumbers;
	cin >> countOfNumbers;
	cout << endl;

	// Переменная хранит только что введенное целое число
	int number;

	// Переменная хранит сумму последовательности целых чисел
	int sumOfNumbers = 0;

	cout << "Введите числа, которые нужно просуммировать: " << endl;

	while (countOfNumbers > 0) {
		cin >> number;
		sumOfNumbers += number;
		countOfNumbers -= 1;
	}
	cout << endl;
	cout << "Сумма введенных чисел: " << sumOfNumbers << "!" << endl;

}