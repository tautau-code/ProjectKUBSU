// ����������� �������-������� Gradebook
// ���� �������� ���������� �������, ��������� ������� ��������� � GradeBook.h

#include <iostream> 
using std::cout;
using std::endl;

// �������� ����������� ������ GradeBook
#include "GradeBook.h"


	// ����������� �������������� courseName ���������� �������
	GradeBook::GradeBook(string name) {
		setCourseName(name); // ���������������� ����� set-�������
	} //����� ������������ GradeBook

	// �������, ��������������� �������� �����
	void GradeBook::setCourseName(string name) {
		courseName = name; // ��������� �������� ����� � �������
	} // ����� ������� setCourseName

	// �������, ���������� �������� �����
	string GradeBook::getCourseName() {
		return courseName; // ���������� courseName �������
	} //����� ������� getCourseName

	//�������, ��������� ����������� ������������ GradeBook
	void GradeBook::displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // ����� ������� displayMessage
