// создать GradeBook и вызвать его функцию determineClassAverage

#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook


// функция main начинает исполнение программы
int main() 
{
	int gradesArray[GradeBook::students] =
	{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

	GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);

	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0; // показываем успешное завершение
} // конец main