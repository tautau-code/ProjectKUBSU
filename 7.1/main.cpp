/*
Реализация алгоритма "пузырьковой сортировки" для массива из 10 целых чисел
*/


#include<iostream>
using namespace std;
#include<random>
#include<time.h>
#include<iomanip>
#include"Output.h"

int main()
{

	setlocale(LC_ALL, "ru");
	// объявление последнего индекса массива
	const int arraySize = 10;
	// объявление массива
	int bubble[arraySize];

	srand(time(NULL));

	cout << "\nМассив будет засеян по сиду " << time(NULL) << endl;

	//заполнение массива псевдослучайными числами
	for (int i = 0; i < arraySize; i++)
	{
		bubble[i] = 1 + rand() % INT16_MAX;
	}

	
	// вывести засеянный массив
	cout << "\n\n\nВ массив были записаны числа: " << endl;
	outputArray(bubble, arraySize);
	// TODO: вынести в отдельный хедер, универсализировать
	{
		int changed = 1; // количество перестановок, вначале 1 чтобы запустилась сортировка
		int force = arraySize; // количество проходов

		//пока при проходе массива не будет 0 перестановок
		while (changed != 0)
		{
			// обнуляем количество перестановок, чтобы можно было выйти из цикла
			// в случае если перестановок не было и массив отсортирован
			changed = 0;

			// выполняет проходы
			for (int i = 1; i < force; i++)
			{
				int buf; // буфер
				//сравнивает смежные числа
				if (bubble[i] < bubble[i - 1])
				{
					// меняет местами
					buf = bubble[i];
					bubble[i] = bubble[i - 1];
					bubble[i - 1] = buf;
					changed++; // изменили - +1
				}
			}

			/*
			уменьшает количество проходов
			т.к. после каждого прохода последнее число в переборке
			всегда наивысшее в массиве
			*/
			force--;
		}
	}
	

	cout << "\n\n\nМассив после сортировки: " << endl;
	outputArray(bubble, arraySize);

	return 0;
}