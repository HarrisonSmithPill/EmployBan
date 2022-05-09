#pragma once
#include<iostream>
#include"Sales.h"
using namespace std;

class Member {
private:
	int fID, fAge;
	string ffName;
	string flName;
	string fDOB;
	//Sales* fsale[1]= {new Sales("test",3,"34/24/1221")};

public:
	//Constructors
	Member(int x, string y, string z, int b, string a) {
		this->fID = x;
		this->ffName = y;
		this->flName = z;
		this->fAge = b;
		this->fDOB = a;
	}

	~Member()
	{

	}

	void details() {
		cin >> fID;
		cin >> ffName;
		cin >> flName;
		cin >> fAge;
		cin >> fDOB;
	}

	//Display Function
	void display() {
		cout << "Member ID: " << fID << endl;
		cout << "First Name: " << ffName << endl;
		cout << "Last Name: " << flName << endl;
		cout << "Age:" << fAge << endl;
		cout << "Date of Birth: " << fDOB << endl;
	}

	//Verification
	bool verify(int check) {
		if (fID == check) {
			return true;
		}
		else {
			return false;
		}
	}

	//Edit Functions
	string ChangeFName(string x) {
		this->ffName = x;
		return ffName;
	}

	string ChangeLName(string x) {
		this->flName = x;
		return flName;
	}

	string ChangeDOB(string x) {
		this->fDOB = x;
		return fDOB;
	}

	int ChangeAge(int x)
	{
		this->fAge = x;
		return fAge;
	}

	/*Sales * add_sale(string name, float price, string date)
	{
		//creats a temp verible for sales
		Sales* temp = new Sales(name, price, date);
		//creats a temp arry for sales one biger than the main arry
		Sales* temp_sale[(sizeof(fsale) / 3) + 1];
		//copys all arry data form the old arry to the temp arry
		copy(fsale, fsale + min((sizeof(fsale) / 3), ((sizeof(fsale) / 3) + 1)), temp_sale);
		//adds new sale to arry
		temp_sale[(sizeof(fsale) / 3) - 1] = temp;
		//shouls deleat old arry
		delete fsale;
		//should load temp arry into old arry
		*fsale = *temp_sale;
		//delete temp;
		//delete temp_sale;
		return *fsale;
	}*/


};

#pragma once
