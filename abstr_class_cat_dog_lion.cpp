// abstr_class_Worker_Manager_lion.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Employer_abstr_class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1.	Создать абстрактный базовый класс Employer (слу-
//       жащий) с чисто виртуальной функцией Print().Соз -
//          дайте три производных класса : President, Manager,
//          Worker.Переопределите функцию Print() для вывода
//          информации, соответствующей каждому типу слу -
//          жащего.
#include <iostream>
#include <string.h>
using namespace std;
//абстрактный базовый класс Работодатель
class Employer
{
public:
	//имя сотрудника
	string title;
	int age{0};
	Employer(string t) {
		title.swap(t); //элемент-функция для обмена содержимого строк
	}
	//возраст сотрудника
	//чисто виртуальная функция
	virtual void Print() = 0;
	//virtual int Get_age() = 0;
	int get_age(int age1)
	{
		return age;
	}
};
//класс президент
class President : public Employer
{
public:
	President(string title1) : Employer (title1) {};
	
	int get_age();

	virtual void Print() {
		cout << " President "<<"\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}
	
	
};
//класс менеджер
class Manager : public Employer
{
public:
	Manager(string title) : Employer(title) {};
	virtual void Print() {
		cout << " Manager " <<"\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}
};
//класс рабочий
class Worker : public Employer
{
public:
	Worker(string title) : Employer(title) {};
	virtual void Print() {
		cout << " Worker " << "\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}
};
void main()
{
	system("chcp 1251");
	//объявим массив указателей на базовый класс Employer
	//и сразу его заполним указателями, создавая объекты
	//cписок животных
	Employer* Employers[3] =
	{
		new President("Путин"),
		new Manager("Денис"),
		new Worker("Саня"),
	};
	for (int k = 0; k < 3; k++)
		Employers[k]->Print();
}

int President::get_age()
{
	return age;
}
