//���������� ����� GradeBook � �������-�������� displayMessage
//������� ������ GradeBook � ������� ��� ������� displayMessage

#include <iostream> 
using std::cout;
using std::endl;

//����������� ������ GradeBook
class GradeBook {
public:
	//�������, ��������� ����������� ������������ GradeBook
	void displayMessage() {
		cout << "Wellcome to the GradeBook!" << endl;
	} // ����� ������� displayMessage
}; // ����� ������ GradeBook

// ������� main �������� ���������� ���������
int main() {
	GradeBook myGradeBook; //������� GradeBook � ������ myGradebook
	myGradeBook.displayMessage(); // ������� displayMessage �������
	return 0; // ���������� �������� ����������
} // ����� main