//Создание нескольких элементов класса GradeBook и использоание
// конструктора GradeBook для спецификации названия курса
// при создании каждого из объектов GradeBook


#include <iostream> 
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook


// функция main начинает исполнение программы
int main() {

	// создать два объекта GradeBook
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// вывести исходное значение courseName для каждого GradeBook
	cout << "gradeBook1 created for: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for: " << gradeBook2.getCourseName() 
		<< endl;


	return 0; // показываем успешное завершение
} // конец main