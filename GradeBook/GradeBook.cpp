// определение элемент-функций Gradebook
// файл содержит реализацию функций, прототипы которых объ€влены в GradeBook.h

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // гарантирует вывод дес€тичной точки

// включить определение класса GradeBook
#include "GradeBook.h"

#include <iomanip> // параметризованные манипул€ции потока
using std::setprecision; // установить количество точек после зап€той
using std::setw;


	// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook(string name, const int gradesArray[]) {
	setCourseName(name); // инициализировать вызов set-функции
	
	//копировать оценки из gradesArray и элемент данных grades
	for (int grade = 0; grade < students; grade++) {
		grades[grade] = gradesArray[grade];
	}

} //конец конструктора GradeBook



// функци€, устанавливающа€ название курса
void GradeBook::setCourseName(string name) {
	courseName = name;
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::processGrades() {
	outputGrades();

	cout << "\nClass average is " << setprecision(2) << fixed << getAverage() << endl;
	cout << "Lowest grade is " << getMinimum() <<
		"\nHighest grade is " << getMaximum() << endl;

	outputBarChart();
}

int GradeBook::getMinimum()
{
	int lowGrade = 100; // прин€ть низшую оценку равной 100

	for (int grade = 0; grade < students; grade++) 
	{
		// если текуща€ оценка меньше lowGrade, присвоить ее lowGrade
		if (grades[grade] < lowGrade)
		{
			lowGrade = grades[grade]; // нова€ низша€ оценка
		}
	}

	return lowGrade;
}

int GradeBook::getMaximum()
{
	int highGrade = 0;

	for (int grade = 0; grade < students; grade++)
	{
		if (grades[grade] > highGrade)
		{
			highGrade = grades[grade];
		}
	}

	return highGrade;
}

double GradeBook::getAverage()
{
	int total = 0; // инициализировать сумму

	//суммировать оценки в массиве
	for (int grade = 0; grade < students; grade++)
	{
		total += grades[grade];
	}
	return static_cast<double>(total) / students;
}

void GradeBook::outputBarChart()
{
	cout << "\nGrade distribution:" << endl;
	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };

	for (int grade = 0; grade < students; grade++)
	{
		frequency[grades[grade] / 10]++;
	}

	for (int count = 0; count < frequencySize; count++)
	{
		if (count == 0)
		{
			cout << "  0-9: ";
		}
		else if (count == 10)
		{
			cout << "  100: ";
		}
		else
		{
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		}

		for (int stars = 0; stars < frequency[count]; stars++)
		{
			cout << '*';
		}

		cout << endl;
	}
}

void GradeBook::outputGrades()
{
	cout << "\nThe grades are:\n\n";

	for (int student = 0; student < students; student++)
	{
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
	}
}