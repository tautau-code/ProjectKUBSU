#include <iostream>
using std::cout;
using std::endl;

int cube(int y); // прототип функции

int main() {
	//6.6
	register int count = 0;
	static double lastVal;

	int x;

	for (x = 1; x <= 10; x++) { // повторить 10 раз
		cout << cube(x) << endl;// вычислить и вывести куб x
	}

	return 0; // успешное завершение
}

int cube(int y) {
	return y * y * y;
}

