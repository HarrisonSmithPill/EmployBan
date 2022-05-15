#pragma once
#include<iostream>
using namespace std;

class Sales
{
private:

	string fobject_name;
	float fprice;
	string fdate;

public:
	Sales(string name, float price, string date);


	void display();
	string getName();
	int getPrice();
	string getDate();

	string change_object_name(string x);
	int change_price(float x);
	string change_data(string x);
};