#include<iostream>
using namespace std;

int main()
{
	const int arraySize = 20;
	int a[20];


	
	for (int i = 0; i < arraySize; i++)
	{
		int num = 10 + rand() % 101;
		
		for (int i = 0; i < arraySize; i++)
		{
			if ( & a[i] != & num)
			{

			}
		}
	}

}