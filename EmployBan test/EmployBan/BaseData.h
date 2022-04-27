#pragma once
#include <string>
class BaseData
{
private:
	int fAge;
	int fID;
	int OrderSelect;
	int OrderType;
	int listSize;
	std::string fFName;
	std::string fSName;
	std::string fDOB;
	std::string fHList[10];
public:

	BaseData();


	const int getAge() const;
	const int getID() const;
	const std::string getFName() const;
	const std::string getSName() const;
	const std::string getDOB() const;
	std::string getHList(int i);


	void updateAge(int fupdate);
	void updateID(int fupdate);
	void updateFName(std::string fupdate);
	void updateSName(std::string fupdate);
	void updateDOB(std::string fupdate);

	void insertProduct(std::string fproduct);
};
