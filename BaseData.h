#pragma once
#include <string>
#include "Sales.h"
#include <vector>
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
	vector<Sales> fsales;
public:

	BaseData(int id, string Fname, string Sname, int age, string dob);


	const int getAge() const;
	const int getID() const;
	const std::string getFName() const;
	const std::string getSName() const;
	const std::string getDOB() const;
	std::string getHList(int i);

	bool verify(int check);

	void updateAge(int fupdate);
	void updateID(int fupdate);
	void updateFName(std::string fupdate);
	void updateSName(std::string fupdate);
	void updateDOB(std::string fupdate);
	void display();

	void insertProduct(std::string fproduct);
	void Add_Sales(string name, float price, string date);
	void Dispaly_sales();
	string Get_sale_name(int index);
	float Get_sale_price(int index);
	string Get_sale_dob(int index);
	vector<Sales> Get_sales_list();
	Sales Get_sales(int index);
};