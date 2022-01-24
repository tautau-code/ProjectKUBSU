// определение элемент-функций Gradebook
// файл содержит реализацию функций, прототипы которых объ€влены в GradeBook.h

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

// включить определение класса GradeBook
#include "GradeBook.h"


	// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook(string name, string teacherName) {
	setCourseName(name); // инициализировать вызов set-функции
	setTeacherName(teacherName); 
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
	cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!\n"
		<< "This course is present by: " << getTeacherName() << "." << endl;
} // конец функции displayMessage


void GradeBook::setTeacherName(string name) {
	teacherName = name;
}

string GradeBook::getTeacherName() {
	return teacherName;
}


// определение среднего по группе, исход€ из 10 введенных оценок
void GradeBook::determineClassAverage() {
	int total; // сумма оценок, введенных пользователем
	int gradeCounter; // номер следующей вводимой оценки
	int grade; // значение введенной пользователем оценки
	int average; // средн€€ оценка

	// этап инициализации
	total = 0; // инициализировать сумму
	gradeCounter = 1; // инициализировать счетчик цикла

	// этап обработки
	while (gradeCounter <= 10) {
		cout << "Enter grade: "; // запросить ввод
		cin >> grade; // ввести следующую оценку
		total = total + grade; // прибавить оценку к total
		gradeCounter = gradeCounter + 1; // увеличить счетчик на 1
	} // конец while

	// этап завершени€
	average = total / 10; // целое деление дает целый результат
	
	//вывести сумму и среднее значение оценок
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;
} // конец функции determineClassAverage