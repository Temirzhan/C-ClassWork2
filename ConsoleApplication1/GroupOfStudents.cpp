#include "stdafx.h"
#include "GroupOfStudents.h"


GroupOfStudents::GroupOfStudents()
{
	count = 0;
}

void GroupOfStudents::add(string lName, string fName, string pName,int gen, int year)
{
	Person studen(lName, fName, pName);
	studen.setGender(gen);
	studen.setYearOfBirth(year);
	Students[count] = studen;
	count++;
}

void GroupOfStudents::PintStudents()
{
	for (int i = 0;i < count;i++)
	{
		Students[i].toString();
	}
}

void GroupOfStudents::serch_Gender(int gend)
{
	for (int i = 0;i < count;i++)
	{
		if(Students[i].getGender==gend)
		Students[i].toString();
	}
}

void GroupOfStudents::serch_Yer(int year)
{
	for (int i = 0;i < count;i++)
	{
		if (Students[i].getAge > year)
			Students[i].toString();
	}
}


GroupOfStudents::~GroupOfStudents()
{
}
