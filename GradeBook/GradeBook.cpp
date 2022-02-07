// ����������� �������-������� Gradebook
// ���� �������� ���������� �������, ��������� ������� ��������� � GradeBook.h

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // ����������� ����� ���������� �����

// �������� ����������� ������ GradeBook
#include "GradeBook.h"

#include <iomanip> // ����������������� ����������� ������
using std::setprecision; // ���������� ���������� ����� ����� �������


	// ����������� �������������� courseName ���������� �������
GradeBook::GradeBook(string name, string teacherName) {
	setCourseName(name); // ���������������� ����� set-�������
	setTeacherName(teacherName); 
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
	cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!\n"
		<< "This course is present by: " << getTeacherName() << "." << endl;
} // ����� ������� displayMessage


void GradeBook::setTeacherName(string name) {
	teacherName = name;
}

string GradeBook::getTeacherName() {
	return teacherName;
}


// ����������� �������� �� ������, ������ �� 10 ��������� ������
void GradeBook::determineClassAverage() {
	int total; // ����� ������, ��������� �������������
	int gradeCounter; // ����� ��������� �������� ������
	int grade; // �������� ��������� ������������� ������
	double average; // ������� ������

	// ���� �������������
	total = 0; // ���������������� �����
	gradeCounter = 0; // ���������������� ������� �����

	// ���� ���������
	// ��������� ���� � ��������� ��������� ������������� ������
	cout << "Enter grade ot -1 to quit: ";
	cin >> grade; // ������ ������ ��� ����������� ��������

	// ����, ���� �� ����� ������� ����������� ��������
	while (grade != -1) {
		
		total = total + grade; // ��������� ������ � total
		gradeCounter = gradeCounter + 1; // ��������� ������� �� 1

		// ��������� ����� ��������� ��������� ������ ������������
		cout << "Enter grade ot -1 to quit: ";
		cin >> grade; // ������ ������ ��� ����������� ��������
	} // ����� while

	// ���� ����������
	if (gradeCounter != 0) {
		//��������� ������� �� ���� �������
		average = static_cast<double>(total) / gradeCounter;
		//������� ����� � ������� (� ����� ������� ��������)
		cout << "\nTotal of all " << gradeCounter
			<< " grades entered is " << total << endl;
		cout << "Class average is " << setprecision(2) << fixed
			<< average << endl;

	}
	else
		cout << "No grades were entered" << endl;
} // ����� ������� determineClassAverage