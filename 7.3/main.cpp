
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};


	cout << "Element" << setw(13) << "Value" << endl;

	for (int j = 0; j < 10; j++) {
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}

	return 0;
}

