#include <iostream>
using namespace std;
#include <iomanip>

// Программа опроса студентов

int main() {
	
	const int responseSize = 40; // размер массива ответов
	const int frequencySize = 11; // размер массива частот

	// поместить ответы вопроса в массив responses
	const int responses[responseSize] = { 1 ,   2 ,   6 ,   4 ,  8 ,   5 ,   9 ,   7 ,
  8 ,   10 ,  1 ,   6 ,   3 ,   8 ,   6 ,   10 ,  3 ,   8 ,   2 ,   7 ,   6 ,   5 ,   7 ,   6 ,   8 ,   6 ,   7 ,
  5 ,   6 ,   6 ,   5 ,   6 ,   7 ,   5 ,   6 ,   4 ,   8 ,   6 ,  8 ,   10 };

	// инициализировать счетчик чатот нулями
	int frequency[frequencySize] = { 0 };

	// для каждого ответа выбрать элемент responses и использовать его
	// как индекс инкрементируемого элемента массива frequency
	for (int answer = 0; answer < responseSize; answer++) {
		frequency[responses[answer]]++;
	}

	cout << "Rating" << setw(17) << "Frequency" << endl;

	for (int rating = 1; rating < frequencySize; rating++) {
		cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
	}

	return 0;
}
