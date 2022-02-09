#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int count;
	cin >> count;
	
	int num;
	int min = INT_MAX;

	while (count > 0) {
		cin >> num;
		if (num < min) {
			min = num;
		}
		count--;
	}
	cout << "Min = " << min << endl;
}