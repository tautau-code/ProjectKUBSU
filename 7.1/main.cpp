/*
���������� ��������� "����������� ����������" ��� ������� �� 10 ����� �����
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
	// ���������� ���������� ������� �������
	const int arraySize = 10;
	// ���������� �������
	int bubble[arraySize];

	srand(time(NULL));

	cout << "\n������ ����� ������ �� ���� " << time(NULL) << endl;

	//���������� ������� ���������������� �������
	for (int i = 0; i < arraySize; i++)
	{
		bubble[i] = 1 + rand() % INT16_MAX;
	}

	
	// ������� ��������� ������
	cout << "\n\n\n� ������ ���� �������� �����: " << endl;
	outputArray(bubble, arraySize);
	// TODO: ������� � ��������� �����, ������������������
	{
		int changed = 1; // ���������� ������������, ������� 1 ����� ����������� ����������
		int force = arraySize; // ���������� ��������

		//���� ��� ������� ������� �� ����� 0 ������������
		while (changed != 0)
		{
			// �������� ���������� ������������, ����� ����� ���� ����� �� �����
			// � ������ ���� ������������ �� ���� � ������ ������������
			changed = 0;

			// ��������� �������
			for (int i = 1; i < force; i++)
			{
				int buf; // �����
				//���������� ������� �����
				if (bubble[i] < bubble[i - 1])
				{
					// ������ �������
					buf = bubble[i];
					bubble[i] = bubble[i - 1];
					bubble[i - 1] = buf;
					changed++; // �������� - +1
				}
			}

			/*
			��������� ���������� ��������
			�.�. ����� ������� ������� ��������� ����� � ���������
			������ ��������� � �������
			*/
			force--;
		}
	}
	

	cout << "\n\n\n������ ����� ����������: " << endl;
	outputArray(bubble, arraySize);

	return 0;
}