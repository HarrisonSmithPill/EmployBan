#include <string>
#include "Sales.h"
#include<iostream>
#include <iomanip>

Sales::Sales(string name, float price, string date)
{
	fobject_name = name;
	fprice = price;
	fdate = date;
}



void Sales::display()
{
	cout << "Product Name:" << setw(16) << left << fobject_name;
	cout << "Product Price:$" << setw(6) << left << fprice;
	cout << "sold date:" << fdate << endl;
}


string Sales::change_object_name(string x)
{
	fobject_name = x;
	return fobject_name;
}
string Sales::getName()
{
	return fobject_name;
}

int Sales::change_price(float x)
{
	fprice = x;
	return fprice;
}
int Sales::getPrice()
{
	return fprice;
}

string Sales::change_data(string x)
{
	fdate = x;
	return fdate;
}
string Sales::getDate()
{
	return fdate;
}