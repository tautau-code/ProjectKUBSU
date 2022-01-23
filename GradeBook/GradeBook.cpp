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
		// если не более 25 символов
		if (name.length() <= 25) {
			courseName = name; // сохранить название курса в объекте
		}
		// если в названии более 25 символов
		if (name.length() > 25) {
			// записать в courseName первые 25 символов параметра name
			courseName = name.substr(0, 25); // начать с 0, длина 25

			cout << "Name \"" << name << "\" exceeds maximum length. \n"
				"Limiting courseName to first 25 characters. \n" << endl;
		}// конец if

	} // конец функции setCourseName

	// функци€, получающа€ название курса
	string GradeBook::getCourseName() {
		return courseName; // возвратить courseName объекта
	} //конец функции getCourseName

	//функци€, вывод€ща€ приветствие пользователю GradeBook
	void GradeBook::displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // конец функции displayMessage
