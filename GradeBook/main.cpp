// ������� GradeBook � ������� ��� ������� determineClassAverage

#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // �������� ����������� ������ GradeBook


// ������� main �������� ���������� ���������
int main() {

	// ������� ������ myGradeBook ������ GradeBook
	// � �������� ������������ �������� �����
	GradeBook myGradeBook("CS101 C++ Programming", "Nelli");

	myGradeBook.displayMessage(); // ������� �����������
	myGradeBook.determineClassAverage(); // ����� ������� 10 ������

	return 0; // ���������� �������� ����������
} // ����� main