//���������� ����� GradeBook ���������� ������� ������ courseName
// � �������-������� ��� ��������� � ���������� ��� ��������;
//������� ������ GradeBook � �������������� ������ GradeBook

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

	string nameOfCourse; //������ ��� �������� �������� �����
	GradeBook myGradeBook; //������� GradeBook � ������ myGradebook

	//������� �������� �������� courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	// ���������, ������ � ���������� �������� �����
	cout << "\nPlease enter the course name: " << endl;
	getline(cin, nameOfCourse); // ��������� �������� � ���������
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl; // ������� ������ ������


	// ������� displayMessage �������
	// � �������� �� nameOfCourse � �������� ���������
	myGradeBook.displayMessage();
	return 0; // ���������� �������� ����������
} // ����� main