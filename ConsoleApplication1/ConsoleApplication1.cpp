// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include "GroupOfStudents.h"
#include "Person.h"
#include<iostream>


int main()
{
	setlocale(LC_ALL, "rus");
	// 1.1. ������� ����� GroupOfStudents.
	// 1.2. ������ ������ ������� ������������ ������ �������� ������ Person.
	// 1.3. ������� ����� ��� ���������� ���, ���� �������� � ���� ��������� � ������.
	// 1.4. ������� ����� ������� ������� ������ ��������.
	GroupOfStudents NewGoup;
	string Name;
	string lName;
	string fName;
	int god;
	int gend;
	char f;
	// 1.5. ������� ����� ������� ������� ������ � ������� �� ����.
	// 1.6. ������� ����� ������� ������� ������ � ������� �� ��������.
	do
	{
		cout << "������� ��� ��������" << endl;
		cin >> Name;
		cout << "������� � ��������" << endl;
		cin >> lName;
		cout << "������� �� ��������" << endl;
		cin >> fName;
		cout << "������� ��� ��������" << endl;
		cin >> god;
		cout << "������� ���� ��������" << endl;
		cin >> gend;
		cin >> f;
		NewGoup.add(Name, lName, fName, gend, god);
	} while(f=='y');
	NewGoup.serch_Gender(1);
	NewGoup.serch_Gender(0);
	NewGoup.serch_Yer(20);

	// 2.1. ������ �������� � ������.
	// 2.2. ������� ������ ���� ��������.
	// 2.3. ������� ������ ��������. � ������ ������, ����� ������.
	// 2.4. ������� ������ �������� ������ 20 ���.
    return 0;
}

