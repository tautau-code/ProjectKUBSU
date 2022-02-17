#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	
	int n = 5;
	

	int f = n;
	
	cout << setw(8) << std::left << "n" << setw(8) << std::left << "n!" << endl;

	for (int i = 1; i < n; i++) {
		
		f = f * i;
		cout << setw(8) << std::left << i << setw(8) << std::left << f << endl;
		
	}

	
}