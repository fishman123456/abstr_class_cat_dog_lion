// abstr_class_cat_dog_lion.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
//абстрактный базовый класс
class Animal
{
public:
	//кличка животного
	string Title;
	//простой конструктор
	Animal(string t) {
		Title = t;
	}
	//чисто виртуальная функция
	virtual void speak() = 0;
};
//класс лягушка
class Frog : public Animal
{
public:
	Frog(string Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'kwa-kwa\'\n";
	}
};//класс собака
class Dog : public Animal
{
public:
	Dog(string Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'gav-gav\'\n";
	}
};
//класс кошка
class Cat : public Animal
{
public:
	Cat(string Title) : Animal(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'myau-myau\'\n";
	}
};
//класс лев
class Lion : public Cat
{
public:
	Lion(string Title) : Cat(Title) {};
	virtual void speak() {
		cout << Title << " say " << "\'rrr-rrr\'\n";
	}
};
int main()
{
	//объявим массив указателей на базовый класс Animal
	//и сразу его заполним указателями, создавая объекты
	//cписок животных
	Animal* animals[4] =
	{
	new Dog("Bob"),
	new Cat("Murka"),
	new Frog("Vasya"),
	new Lion("King") };
	for (int k = 0; k < 4; k++)
		animals[k]->speak();
}
