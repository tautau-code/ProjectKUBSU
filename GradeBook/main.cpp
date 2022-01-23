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
	// исходное имя для курса gradeBook1 слишком длинное
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// вывести courseName каждого GradeBook
	cout << "gradeBook1's initial course name is: "
		<< gradeBook1.getCourseName()
		<< "gradeBook2's initial course name is: "
		<< gradeBook2.getCourseName() << endl;

	return 0; // показываем успешное завершение
} // конец main