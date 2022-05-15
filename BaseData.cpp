using namespace std;
#include <string>
#include "BaseData.h"
#include<iostream>

BaseData::BaseData(int id, string Fname, string Sname, int age, string dob) :
	fID(),
	OrderSelect(0),
	OrderType(0),
	listSize(0)
{
	fID = id;
	fFName = Fname;
	fSName = Sname;
	fAge = age;
	fDOB = dob;
	fHList[listSize];
}



void BaseData::display() {
	cout << "Member ID: " << fID << endl;
	cout << "First Name: " << fFName << endl;
	cout << "Last Name: " << fSName << endl;
	cout << "Age:" << fAge << endl;
	cout << "Date of Birth: " << fDOB << endl;
}

//Verification
bool BaseData::verify(int check) {
	if (fID == check) {
		return true;
	}
	else {
		return false;
	}
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

void BaseData::Add_Sales(string name, float price, string date)
{
	Sales temp(name, price, date);
	fsales.push_back(temp);
}

void BaseData::Dispaly_sales()
{
	cout << "Sales:" << endl;
	for (int i = 0; fsales.size() > i; i++)
	{
		fsales[i].display();
	}
}

string BaseData::Get_sale_name(int index)
{
	return fsales[index].getName();
}

float BaseData::Get_sale_price(int index)
{
	return fsales[index].getPrice();
}

string BaseData::Get_sale_dob(int index)
{
	return fsales[index].getDate();
}

vector<Sales> BaseData::Get_sales_list()
{
	return fsales;
}

Sales BaseData::Get_sales(int index)
{
	return fsales[index];
}

