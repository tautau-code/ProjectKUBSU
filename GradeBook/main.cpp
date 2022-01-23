//Определить класс GradeBook с элемент-функцией displayMessage, принимающей параметр
//создать объект GradeBook и вызвать его функцию displayMessage

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string> // программа испльзует стандартный класс string
using std::string;
using std::getline;

//определение класса GradeBook
class GradeBook {
public:
	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage( string courseName) {
		cout << "Wellcome to the GradeBook for\n" << courseName << "!" << endl;
	} // конец функции displayMessage
}; // конец класса GradeBook

// функция main начинает исполнение программы
int main() {

	string nameOfCourse; //строка для хранения названия курса
	GradeBook myGradeBook; //создать GradeBook с именем myGradebook

	// запросить и ввести название курса
	cout << "Please enter the course name: " << endl;
	getline(cin, nameOfCourse); // прочитать название с пробелами
	cout << endl; // вывести пустую строку


	// вызвать displayMessage объекта
	// и передать ей nameOfCourse в качестве аргумента
	myGradeBook.displayMessage(nameOfCourse);
	return 0; // показываем успешное завершение
} // конец main