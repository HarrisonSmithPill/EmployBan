#pragma once

#include <iostream>
#include <string>
#include <fstream>

class AddData
{
private:

	int fAge;
	char fFName;
	char fSName;
	char fDOB;
	int fID;
	int OrderSelect;
	int OrderType;


public:

	AddData();

	~AddData() {}

	const int getAge() const;

	const char getFName() const;

	const char getLName() const;

	const char getDOB() const;

	const int getID() const;

	const char insertProduct(const char fproductHistory[], char fProduct, int fsize);

	const int updateAge(int fupdate) const;

	const char updateFName(char fupdate) const;

	const char updateLName(char fupdate) const;

	const char updateDOB(char fupdate) const;

	const int updateID(int fupdate) const;

}
