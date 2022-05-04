#include"Member.h"
#include"BaseData.h"
#include "Sales.h"
#include<string>
#include<fstream>
#include<vector>
#include<iostream>
#include <iomanip>


using namespace std;

int main() {
	int ID, option = NULL, option_edit, exit = 0, exit2 = 0, age, temp_id, x;
	string ans, change, temp_fname, temp_lname, temp_dob;
	bool check;
	float price;

	BaseData add_member(10, "John", "Jones", 23, "18/5/1995");
	BaseData add_member2(0, "bob", "Jones", 30, "13/3/1993");
	//Member* add_member = new Member(10, "John", "Jones", 23, "18/5/1995");
	//Member* add_member2 = new Member(0, "bob", "Jones", 30, "13/3/1993");
	BaseData tmember(-1, "test", "test", 0, "test");
	vector<BaseData> members = { add_member, add_member2 };
	members[1].Add_Sales("apple", 4.95, "4/3/2022");
	members[1].Add_Sales("blue", 4.95, "4/3/2022");
	//Member*  members[2] = { add_member, add_member2 };               
	//change to vecter
	//add_member->display();
	//cout << (sizeof(members) / 8) << endl;
	//Member* new1 = new Member(0, "null", "null", "null");
	//new1->display();
	do
	{
		cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
		cout << "1. display members" << endl;
		cout << "2. display members wth sale" << endl;
		cout << "3. search for member" << endl;
		cout << "4. search members wth sale" << endl;
		cout << "5. add member" << endl;
		cout << "6. edit member" << endl;
		cout << "7. add sales" << endl;
		cout << "8. remove member" << endl;
		cout << "9. exit" << endl;
		cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
		cout << "Choise the option by typing the number blow" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			// prints out all of the members in the arry
			for (int i = 0; (members.size()) > i; i++)
			{
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
				//members[i]->display();
				members[i].display();
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			break;
		case 2:
			for (int i = 0; (members.size()) > i; i++)
			{
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
				members[i].display();
				members[i].Dispaly_sales();
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			break;
			break;
		case 3:
			//serchis the arry of the member with the right id
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cout << "Please enter your ID of the member you wish to see: " << endl;
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cin >> ID;
			check = false;
			for (int i = 0; (members.size()) > i; i++)
			{
				if (members[i].verify(ID)) {
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					members[i].display();
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					check = true;
				}

			}
			if (check == false)
			{
				cout << "that ID dose not exist" << endl;
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			break;
		case 4:
			//serchis the arry of the member with the right id
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cout << "Please enter your ID of the member you wish to see: " << endl;
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cin >> ID;
			check = false;
			for (int i = 0; (members.size()) > i; i++)
			{
				if (members[i].verify(ID)) {
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					members[i].display();
					members[i].Dispaly_sales();
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					check = true;
				}

			}
			if (check == false)
			{
				cout << "that ID dose not exist" << endl;
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			break;
		case 5:
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			//makes sure that the id has is not bing used by a nother member
			do
			{
				cout << "Input the ID" << endl;
				cin >> temp_id;
				x = 0;
				for (int i = 0; (members.size()) > i; i++)
				{
					if (members[i].verify(temp_id)) {
						x++;
					}
				}
				if (x != 0)
				{
					cout << "the ID is allready in use" << endl;
				}
			} while (x !=0);
			cout << "Input the first name" << endl;
			cin >> temp_fname;
			cout << "Input the last name" << endl;
			cin >> temp_lname;
			cout << "Input the age" << endl;	
			cin >> age;
			cout << "Input the Date of birth" << endl;
			cin >> temp_dob;
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;

			//creats new member 
			tmember.updateID(temp_id);
			tmember.updateFName(temp_fname);
			tmember.updateSName(temp_lname);
			tmember.updateAge(age);
			tmember.updateDOB(temp_dob);
			
			members.push_back(tmember);
			 
			break;
		case 6:
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cout << "Please enter your ID of the member you wish to change: " << endl;
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cin >> ID;
			x = 0;
			check = false;
			for (int i = 0; (members.size()) > i; i++)
			{
				if (members[i].verify(ID)) {
					temp_id = i;
					x++;
					check = true;
					break;
				}
			}
			
			//this make sure that the id dose exist
			if (check)
			{
				do
				{
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					cout << "What details would you like to change?" << endl;
					cout << "1. Age" << "\n" << "2. First Name" << "\n" << "3. Last Name" << "\n" << "4. Date of Birth" << "\n" << "5. Exit" << endl;
					cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
					cin >> option_edit;

					switch (option_edit)
					{
					case 1:
						cout << "Please enter your age: " << endl;
						cin >> age;
						members[temp_id].updateAge(age);
						break;

					case 2:
						cout << "Please enter your First Name: ";
						cin >> change;
						members[temp_id].updateFName(change);
						break;

					case 3:
						cout << "Please enter your Last Name: ";
						cin >> change;
						members[temp_id].updateSName(change);
						break;

					case 4:
						cout << "Please enter your Date of Birth: " << "\n";
						cin >> change;
						members[temp_id].updateDOB(change);
						break;

					case 5:
						cout << "Changes have been saved!" << endl;
						cout << "Updated details: " << endl;
						cout << "Have a nice day!" << endl;
						cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
						exit2 = 1;
						break;
					default:
						break;
					}

				} while (exit2 != 1);
			}
			else
			{
				cout << "that ID dose not exist" << endl;
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			break;
		case 7:
			cout << "enter id that you want to add the sales to" << endl;
			cin >> ID;
			check = false;
			for (int i = 0; (members.size()) > i; i++)
			{
				if (members[i].verify(ID))
				{
					temp_id = i;
					check = true;
				}
			}
			if (check == false)
			{
				cout << "that ID dose not exist" << endl;
				cout << "=" << setfill('=') << setw(100) << "=" << setfill(' ') << endl;
			}
			else
			{
				cout << "Enter the name of the product" << endl;
				cin >> temp_fname;
				cout << "Enter price of the product" << endl;
				cin >> price;
				cout << "Enter the date the product was brout on" << endl;
				cin >> temp_dob;
				members[temp_id].Add_Sales(temp_fname, price, temp_dob);
				cout << "Product added";
			}
			break;
		case 8:
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			cout << "enter id of member that you want ot remove" << endl;
			cin >> ID;
			check = false;
			for (int i = 0; (members.size()) > i; i++)
			{
				if (members[i].verify(ID))
				{
					temp_id = i;
					check = true;
				}
			}


			if (check)
			{
				members.erase(members.begin() + temp_id);
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			else
			{
				cout << "that ID dose not exist" << endl;
				cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			}
			
			//cout << members.size() << endl;
			break;
		case 9:
			exit = 1;
			cout << "Have a nice day!" << endl;
			cout << "="<<setfill('=')<< setw(100) << "=" << setfill(' ') << endl;
			break;
		default:
			break;
		}
	} while (exit != 1);

	/*do {
		cout << "Please enter your ID: " << endl;
		cin >> ID;
		if (test->verify(ID) == true) {
			do {
				cout << "=========================" << endl;
				cout << "Current Member details: " << endl;
				test->display();
				cout << "=========================" << endl;
				cout << "Would you like to change your details?" << endl;
				cin >> ans;
				if (ans == "yes" || ans == "y") {
					do {
						cout << "=========================" << endl;
						cout << "What details would you like to change?" << endl;
						cout << "1. Age" << "\n" << "2. First Name" << "\n" << "3. Last Name" << "\n" << "4. Date of Birth" << "\n" << "5. Exit" << endl;
						cin >> option;
						cout << "=========================" << endl;
						switch (option) {
						case 1:
							cout << "Please enter your age: " << endl;
							break;

						case 2:
							cout << "Please enter your First Name: ";
							cin >> change;
							test->ChangeFName(change);
							break;

						case 3:
							cout << "Please enter your Last Name: ";
							cin >> change;
							test->ChangeLName(change);
							break;

						case 4:
							cout << "Please enter your Date of Birth: " << "\n";
							cin >> change;
							test->ChangeDOB(change);
							break;

						default:
							cout << "Changes have been saved!" << endl;
							cout << "Updated details: " << endl;
							test->display();
							cout << "Have a nice day!" << endl;
							cout << "=========================" << endl;
							break;
						}

						cout << "Would you like to change any other details?" << endl;
						cin >> ans;
						cout << "=========================" << endl;

					} while (ans != "no");
				}
			} while (ans != "yes" && ans != "no");

		}
		else {
			cout << "Invalid ID number!" << endl;
			cout << "Please try again!" << endl;
		}
	} while (test->verify(ID) != true);

	cout << "Changes have been saved!" << endl;
	cout << "Updated details: " << endl;

	test->display();
	cout << "Have a nice day!" << endl;
	cout << "=========================" << endl;
	cout << "=========================" << endl;
	*/
	return 0;
}