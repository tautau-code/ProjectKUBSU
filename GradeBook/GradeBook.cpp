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
		// ���� �� ����� 25 ��������
		if (name.length() <= 25) {
			courseName = name; // ��������� �������� ����� � �������
		}
		// ���� � �������� ����� 25 ��������
		if (name.length() > 25) {
			// �������� � courseName ������ 25 �������� ��������� name
			courseName = name.substr(0, 25); // ������ � 0, ����� 25

			cout << "Name \"" << name << "\" exceeds maximum length. \n"
				"Limiting courseName to first 25 characters. \n" << endl;
		}// ����� if

	} // ����� ������� setCourseName

	// �������, ���������� �������� �����
	string GradeBook::getCourseName() {
		return courseName; // ���������� courseName �������
	} //����� ������� getCourseName

	//�������, ��������� ����������� ������������ GradeBook
	void GradeBook::displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // ����� ������� displayMessage
