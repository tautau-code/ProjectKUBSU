//���������� ����� GradeBook � �������-�������� displayMessage, ����������� ��������
//������� ������ GradeBook � ������� ��� ������� displayMessage

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
	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage( string courseName) {
		cout << "Wellcome to the GradeBook for\n" << courseName << "!" << endl;
	} // ����� ������� displayMessage
}; // ����� ������ GradeBook

// ������� main �������� ���������� ���������
int main() {

	string nameOfCourse; //������ ��� �������� �������� �����
	GradeBook myGradeBook; //������� GradeBook � ������ myGradebook

	// ��������� � ������ �������� �����
	cout << "Please enter the course name: " << endl;
	getline(cin, nameOfCourse); // ��������� �������� � ���������
	cout << endl; // ������� ������ ������


	// ������� displayMessage �������
	// � �������� �� nameOfCourse � �������� ���������
	myGradeBook.displayMessage(nameOfCourse);
	return 0; // ���������� �������� ����������
} // ����� main