// ������� GradeBook � ������� ��� ������� determineClassAverage

#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // �������� ����������� ������ GradeBook


// ������� main �������� ���������� ���������
int main() 
{
	int gradesArray[GradeBook::students] =
	{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

	GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);

	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0; // ���������� �������� ����������
} // ����� main