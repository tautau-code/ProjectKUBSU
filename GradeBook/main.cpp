//�������� ���������� ��������� ������ GradeBook � ������������
// ������������ GradeBook ��� ������������ �������� �����
// ��� �������� ������� �� �������� GradeBook


#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string> // ��������� ��������� ����������� ����� string
using std::string;
using std::getline;

//����������� ������ GradeBook
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