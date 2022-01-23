// определение класса GradeBook в файле, отдельном от main

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string> // программа испльзует стандартный класс string
using std::string;
using std::getline;

class GradeBook {
public:

	// конструктор инициализирует courseName переданной строкой
	GradeBook(string name) {
		setCourseName(name); // инициализировать вызов set-функции
	} //конец конструктора GradeBook

	// функция, устанавливающая название курса
	void setCourseName(string name) {
		courseName = name; // сохранить название курса в объекте
	} // конец функции setCourseName

	// функция, получающая название курса
	string getCourseName() {
		return courseName; // возвратить courseName объекта
	} //конец функции getCourseName

	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // конец функции displayMessage

private:
	string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook