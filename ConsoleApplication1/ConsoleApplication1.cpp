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
	// 1.1. Создать класс GroupOfStudents.
	// 1.2. Внутри класса создать динамический массив объектов класса Person.
	// 1.3. Создать метод для добавления ФИО, года рождения и пола учащегося в группу.
	// 1.4. Создать метод который выводит список учащихся.
	GroupOfStudents NewGoup;
	string Name;
	string lName;
	string fName;
	int god;
	int gend;
	char f;
	// 1.5. Создать метод который выводит список с отбором по полу.
	// 1.6. Создать метод который выводит список с отбором по возрасту.
	do
	{
		cout << "введите имя студента" << endl;
		cin >> Name;
		cout << "введите и студента" << endl;
		cin >> lName;
		cout << "введите от студента" << endl;
		cin >> fName;
		cout << "введите год студента" << endl;
		cin >> god;
		cout << "введите генд студента" << endl;
		cin >> gend;
		cin >> f;
		NewGoup.add(Name, lName, fName, gend, god);
	} while(f=='y');
	NewGoup.serch_Gender(1);
	NewGoup.serch_Gender(0);
	NewGoup.serch_Yer(20);

	// 2.1. Ввести учащихся в группе.
	// 2.2. Вывести список всех учащихся.
	// 2.3. Вывести список учащихся. С начала женщин, потом мужчин.
	// 2.4. Вывести список учащихся старше 20 лет.
    return 0;
}

