#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>

int main() {

	for (int i = 1; i <= 10; i++) {
		
		for (int n = i; n >= 1; n--) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 10; i >= 1; i--) {

		for (int n = i; n >= 1; n--) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 10; i >= 1; i--) {

		cout << std::setw(10);
		for (int n = i; n >= 1; n--) {
			cout << std::right << '*';
		}
		cout << endl;
	}
}