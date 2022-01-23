//Определить класс GradeBook содержащий элемент данных courseName
// и элемент-функции для установки и извлечения его значений;
//создать объект GradeBook и протестировать объект GradeBook

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

	string nameOfCourse; //строка для хранения названия курса
	GradeBook myGradeBook; //создать GradeBook с именем myGradebook

	//вывести исходное значение courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	// запросить, ввести и установить название курса
	cout << "\nPlease enter the course name: " << endl;
	getline(cin, nameOfCourse); // прочитать название с пробелами
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl; // вывести пустую строку


	// вызвать displayMessage объекта
	// и передать ей nameOfCourse в качестве аргумента
	myGradeBook.displayMessage();
	return 0; // показываем успешное завершение
} // конец main