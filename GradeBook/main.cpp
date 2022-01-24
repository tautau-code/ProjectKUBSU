// создать GradeBook и вызвать его функцию determineClassAverage

#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook


// функция main начинает исполнение программы
int main() {

	// создать объект myGradeBook класса GradeBook
	// и передать конструктору название курса
	GradeBook myGradeBook("CS101 C++ Programming", "Nelli");

	myGradeBook.displayMessage(); // вывести приветствие
	myGradeBook.determineClassAverage(); // найти среднее 10 оценок

	return 0; // показываем успешное завершение
} // конец main