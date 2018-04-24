#pragma once
#include"Person.h"
class GroupOfStudents
{
private:
	Person Students[1000];
	int count;
public:
	GroupOfStudents();
	void add(string lName, string fName, string pName, int gen, int year);
	void PintStudents();
	void serch_Gender(int gend);
	void serch_Yer(int year);
	~GroupOfStudents();
};

