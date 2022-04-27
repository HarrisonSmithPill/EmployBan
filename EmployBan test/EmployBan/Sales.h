#pragma once
#include<iostream>
using namespace std;

class Sales
{
private:

	string fobject_name;
	float fprice;
	int fdate;

public:
	Sales(string name, float price, int date )
	{
		this->fobject_name = name;
		this->fprice = price;
		this->fdate = date;
	}

	Sales()
	{

	}

	void details()
	{
		cin >> fobject_name;
		cin >> fprice;
		cin >> fdate;
	}

	void display()
	{

	}

	string change_object_name(string x)
	{
		this->fobject_name = x;
		return fobject_name;
	}

	int change_price(float x)
	{
		this->fprice = x;
		return fprice;
	}

	int change_data(int x)
	{
		this->fdate = x;
		return fdate;
	}
};

