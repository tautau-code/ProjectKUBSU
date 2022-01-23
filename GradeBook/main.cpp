//Создание нескольких элементов класса GradeBook и использоание
// конструктора GradeBook для спецификации названия курса
// при создании каждого из объектов GradeBook


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

	// конструктор инициализирует courseName переданной строкой
	GradeBook(string name) {
		setCourseName(name); // инициализировать вызов set-функции
	} //конец конструктора GradeBook

	// функция, устанавливающая название курса
	void setCourseName(string name) {
		courseName = name; // сохранить название курса в объекте
	} // конец функции setCourseName

	// функция, получающая название курса
	string getCourseName() {
		return courseName; // возвратить courseName объекта
	} //конец функции getCourseName

	//функция, выводящая приветствие пользователю GradeBook
	void displayMessage() {
		cout << "Wellcome to the GradeBook for\n" << getCourseName() << "!" << endl;
	} // конец функции displayMessage

private:
	string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook

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