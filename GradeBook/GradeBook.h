#pragma once


#include <string> // программа испльзует стандартный класс string
using std::string;

class GradeBook {
public:

	// число студентов, сдавших экзамен
	const static int students = 10;

	// конструктор инициализирует courseName переданной строкой
	GradeBook(string courceName, const int []);

	// функция, устанавливающая название курса
	void setCourseName(string);

	// функция, получающая название курса
	string getCourseName();

	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage();

	void processGrades(); // различные действия над оценками

	int getMinimum();
	int getMaximum();
	double getAverage();

	void outputBarChart();
	void outputGrades();

	// функция для изменения имени преподавателя
	void setTeacherName(string);

	// функция для извлечения имени преподавателя
	string getTeacherName();

	// усредняет введенные оценки
	void determineClassAverage(); 

private:
	string courseName; // название курса для данного GradeBook
	int grades[students]; // массив оценок студентов
	string teacherName; // имя преподавателя для данного GradeBook
}; // конец класса GradeBook