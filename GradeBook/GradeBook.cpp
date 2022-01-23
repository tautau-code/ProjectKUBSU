// определение элемент-функций Gradebook
// файл содержит реализацию функций, прототипы которых объ€влены в GradeBook.h

#include <iostream> 
using std::cout;
using std::endl;

// включить определение класса GradeBook
#include "GradeBook.h"


	// конструктор инициализирует courseName переданной строкой
	GradeBook::GradeBook(string name) {
		setCourseName(name); // инициализировать вызов set-функции
	} //конец конструктора GradeBook

	// функци€, устанавливающа€ название курса
	void GradeBook::setCourseName(string name) {
		courseName = name; // сохранить название курса в объекте
	} // конец функции setCourseName

	// функци€, получающа€ название курса
	string GradeBook::getCourseName() {
		return courseName; // возвратить courseName объекта
	} //конец функции getCourseName

	//функци€, вывод€ща€ приветствие пользователю GradeBook
	void GradeBook::displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // конец функции displayMessage
