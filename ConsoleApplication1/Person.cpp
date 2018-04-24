#include "stdafx.h"
#include "Person.h"
#include<iostream>

// Конструктор по умолчанию
Person::Person() : yearOfBirth(0), gender(0) {}
//{
//	yearOfBirth = 0;
//	gender = 0;
//}

// Конструктор инициализации фамилии, имени и отчества
Person::Person(string lName, string fName, string pName) : Person()
{
	lastName = lName;
	firstName = fName;
	patronymic = pName;
}

// Метод устанавливает значение года рождения.
void Person::setYearOfBirth(const int year)
{
	yearOfBirth = year;
}

// Метод устанавливает значение пола.
void Person::setGender(const int intGender)
{

	gender = intGender;
}

// Метод возвращает значение пола в виде числа.
int Person::getGender()
{
	return gender;
}

// Метод возвращает количество лет в виде числа.
inline int Person::getAge()
{
	struct tm newtime;
	__time32_t seconds = time(NULL);
	_time32(&seconds);
	errno_t err;
	err = _localtime32_s(&newtime, &seconds);
	return newtime.tm_year-yearOfBirth;
}

// Метод возвращает фамилию, имя, отчество, пол, год рождения.
void Person::toString()
{
	cout << "фамилия -" << lastName;
	cout << "имя-" << firstName;
	cout << "отчество-" << patronymic;
	cout << "год рож-" << yearOfBirth;
	cout << "пол" << gender;
	cout << "возраст" << getAge;

}

// Деструктор
Person::~Person()
{
}
