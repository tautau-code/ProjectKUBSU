//�������� ���������� ��������� ������ GradeBook � ������������
// ������������ GradeBook ��� ������������ �������� �����
// ��� �������� ������� �� �������� GradeBook


#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // �������� ����������� ������ GradeBook


// ������� main �������� ���������� ���������
int main() {

	// ������� ��� ������� GradeBook
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// ������� �������� �������� courseName ��� ������� GradeBook
	cout << "gradeBook1 created for: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for: " << gradeBook2.getCourseName() 
		<< endl;


	return 0; // ���������� �������� ����������
} // ����� main