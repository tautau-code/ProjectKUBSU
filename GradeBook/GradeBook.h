#pragma once


#include <string> // ��������� ��������� ����������� ����� string
using std::string;

class GradeBook {
public:

	// ����������� �������������� courseName ���������� �������
	GradeBook(string, string);

	// �������, ��������������� �������� �����
	void setCourseName(string);

	// �������, ���������� �������� �����
	string getCourseName();

	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage();

	// ������� ��� ��������� ����� �������������
	void setTeacherName(string);

	// ������� ��� ���������� ����� �������������
	string getTeacherName();

	void determineClassAverage(); // ��������� ��������� ������

private:
	string courseName; // �������� ����� ��� ������� GradeBook

	string teacherName; // ��� ������������� ��� ������� GradeBook
}; // ����� ������ GradeBook