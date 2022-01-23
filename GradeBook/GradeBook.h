
#include <string> // ��������� ��������� ����������� ����� string
using std::string;

class GradeBook {
public:

	// ����������� �������������� courseName ���������� �������
	GradeBook(string);

	// �������, ��������������� �������� �����
	void setCourseName(string);

	// �������, ���������� �������� �����
	string getCourseName();

	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage();

private:
	string courseName; // �������� ����� ��� ������� GradeBook
}; // ����� ������ GradeBook