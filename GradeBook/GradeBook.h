#pragma once


#include <string> // ��������� ��������� ����������� ����� string
using std::string;

class GradeBook {
public:

	// ����� ���������, ������� �������
	const static int students = 10;

	// ����������� �������������� courseName ���������� �������
	GradeBook(string courceName, const int []);

	// �������, ��������������� �������� �����
	void setCourseName(string);

	// �������, ���������� �������� �����
	string getCourseName();

	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage();

	void processGrades(); // ��������� �������� ��� ��������

	int getMinimum();
	int getMaximum();
	double getAverage();

	void outputBarChart();
	void outputGrades();

	// ������� ��� ��������� ����� �������������
	void setTeacherName(string);

	// ������� ��� ���������� ����� �������������
	string getTeacherName();

	// ��������� ��������� ������
	void determineClassAverage(); 

private:
	string courseName; // �������� ����� ��� ������� GradeBook
	int grades[students]; // ������ ������ ���������
	string teacherName; // ��� ������������� ��� ������� GradeBook
}; // ����� ������ GradeBook