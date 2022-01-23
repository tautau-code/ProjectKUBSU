// ����������� ������ GradeBook � �����, ��������� �� main

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string> // ��������� ��������� ����������� ����� string
using std::string;
using std::getline;

class GradeBook {
public:

	// ����������� �������������� courseName ���������� �������
	GradeBook(string name) {
		setCourseName(name); // ���������������� ����� set-�������
	} //����� ������������ GradeBook

	// �������, ��������������� �������� �����
	void setCourseName(string name) {
		courseName = name; // ��������� �������� ����� � �������
	} // ����� ������� setCourseName

	// �������, ���������� �������� �����
	string getCourseName() {
		return courseName; // ���������� courseName �������
	} //����� ������� getCourseName

	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // ����� ������� displayMessage

private:
	string courseName; // �������� ����� ��� ������� GradeBook
}; // ����� ������ GradeBook