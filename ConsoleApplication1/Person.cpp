#include "stdafx.h"
#include "Person.h"
#include<iostream>

// ����������� �� ���������
Person::Person() : yearOfBirth(0), gender(0) {}
//{
//	yearOfBirth = 0;
//	gender = 0;
//}

// ����������� ������������� �������, ����� � ��������
Person::Person(string lName, string fName, string pName) : Person()
{
	lastName = lName;
	firstName = fName;
	patronymic = pName;
}

// ����� ������������� �������� ���� ��������.
void Person::setYearOfBirth(const int year)
{
	yearOfBirth = year;
}

// ����� ������������� �������� ����.
void Person::setGender(const int intGender)
{

	gender = intGender;
}

// ����� ���������� �������� ���� � ���� �����.
int Person::getGender()
{
	return gender;
}

// ����� ���������� ���������� ��� � ���� �����.
inline int Person::getAge()
{
	struct tm newtime;
	__time32_t seconds = time(NULL);
	_time32(&seconds);
	errno_t err;
	err = _localtime32_s(&newtime, &seconds);
	return newtime.tm_year-yearOfBirth;
}

// ����� ���������� �������, ���, ��������, ���, ��� ��������.
void Person::toString()
{
	cout << "������� -" << lastName;
	cout << "���-" << firstName;
	cout << "��������-" << patronymic;
	cout << "��� ���-" << yearOfBirth;
	cout << "���" << gender;
	cout << "�������" << getAge;

}

// ����������
Person::~Person()
{
}
