#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int s = 1;
	for (int i = 1; i <= 15; i++) {
		if (i % 2 != 0) {
			s = s * i;
			cout << s << endl;
		}
	}
}