
#include <string> // программа испльзует стандартный класс string
using std::string;

class GradeBook {
public:

	// конструктор инициализирует courseName переданной строкой
	GradeBook(string);

	// функция, устанавливающая название курса
	void setCourseName(string);

	// функция, получающая название курса
	string getCourseName();

	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage();

private:
	string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook