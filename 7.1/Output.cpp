#include"Output.h"
#include<iostream>
#include<iomanip>
using namespace std;
void outputArray(int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (i % 5 != 0)
		{
			cout << setw(7) << array[i] << " ";
		}
		else
		{
			cout << endl;
			cout << setw(7) << array[i] << " ";
		}
	}
}