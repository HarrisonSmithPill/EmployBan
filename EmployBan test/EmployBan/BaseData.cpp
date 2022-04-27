using namespace std;
#include <string>
#include "BaseData.h"

BaseData::BaseData() :
	fAge(19),
	fID(10),
	OrderSelect(0),
	OrderType(0),
	listSize(0)
{
	fFName = "weed";
	fSName = "cat";
	fDOB = "10/10/2010";
	fHList[listSize];
}




const int BaseData::getAge() const
{
	return fAge;
}
const int BaseData::getID() const
{
	return fID;
}

const std::string BaseData::getFName() const
{
	return fFName;
}

const std::string BaseData::getSName() const
{
	return fSName;
}


const std::string BaseData::getDOB() const
{
	return fDOB;
}

std::string BaseData::getHList(int i)
{
	return fHList[i];
}



void BaseData::updateAge(int fupdate)
{
	fAge = fupdate;
}

void BaseData::updateID(int fupdate)
{
	fID = fupdate;
}

void BaseData::updateFName(std::string fupdate)
{
	fFName = fupdate;
}

void BaseData::updateSName(std::string fupdate)
{
	fSName = fupdate;
}

void BaseData::updateDOB(std::string fupdate)
{
	fDOB = fupdate;
}


void BaseData::insertProduct(std::string fproduct)
{

	listSize = listSize + 1;
	fHList[listSize] = fproduct;
}
