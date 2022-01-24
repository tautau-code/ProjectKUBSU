#pragma once


#include <string> // программа испльзует стандартный класс string
using std::string;

class GradeBook {
public:

	// конструктор инициализирует courseName переданной строкой
	GradeBook(string, string);

	// функция, устанавливающая название курса
	void setCourseName(string);

	// функция, получающая название курса
	string getCourseName();

	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage();

	// функция для изменения имени преподавателя
	void setTeacherName(string);

	// функция для извлечения имени преподавателя
	string getTeacherName();

	void determineClassAverage(); // усредняет введенные оценки

private:
	string courseName; // название курса для данного GradeBook

	string teacherName; // имя преподавателя для данного GradeBook
}; // конец класса GradeBook