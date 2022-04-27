#include<iostream>
#include"Member.h"
#include"BaseData.h"
#include<string>
#include<fstream>

using namespace std;

int main() {
	int ID, option, option_edit, exit = 0, exit2 = 0, age, temp_id, x, y;
	string ans, change, temp_fname, temp_lname, temp_dob;

	Member* add_member = new Member(10, "John", "Jones", 23, "18/5/1995");
	Member* add_member2 = new Member(0, "bob", "Jones", 30, "13/3/1993");
	Member* temp_member;
	Member*  members[2] = { add_member, add_member2 };
	add_member->display();
	//cout << (sizeof(members) / 8) << endl;
	//Member* new1 = new Member(0, "null", "null", "null");
	//new1->display();

	members[0]->add_sale("paper", 3, 2);

	do
	{
		cout << "=========================================================" << endl;
		cout << "1. display members" << endl;
		cout << "2. display members wth sale" << endl;
		cout << "3. search for member" << endl;
		cout << "4. add member" << endl;
		cout << "5. edit member" << endl;
		cout << "6. add sales" << endl;
		cout << "7. remove member" << endl;
		cout << "8. exit" << endl;
		cout << "=========================================================" << endl;
		cout << "Choise the option by typing the number blow" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			// prints out all of the members in the arry
			for (int i = 0; ((sizeof(members) / 8)) > i; i++)
			{
				cout << "=========================================================" << endl;
				members[i]->display();
				cout << "=========================================================" << endl;
			}
			break;
		case 2:
			break;
		case 3:
			//serchis the arry of the member with the right id
			cout << "=========================================================" << endl;
			cout << "Please enter your ID of the member you wish to see: " << endl;
			cout << "=========================================================" << endl;
			cin >> ID;
			for (int i = 0; ((sizeof(members) / 8)) > i; i++)
			{
				if (members[i]->verify(ID)) {
					cout << "=========================================================" << endl;
					members[i]->display();
					cout << "=========================================================" << endl;
				}

			}
			break;
		case 4:
			cout << "=========================================================" << endl;
			//makes sure that the id has is not bing used by a nother member
			do
			{
				cout << "Input the ID" << endl;
				cin >> temp_id;
				x = 0;
				for (int i = 0; ((sizeof(members) / 8)) > i; i++)
				{
					if (members[i]->verify(temp_id)) {
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
			cout << "=========================================================" << endl;

			//creats new member 
			temp_member = new Member(temp_id, temp_fname, temp_lname, age, temp_dob);
			//creats a new member arry one biger than the privios member
			Member* temp_array[(sizeof(members) / 8) + 1];
			//copys all of the old member ary data into the new on
			copy(members, members + min((sizeof(members) / 8), ((sizeof(members) / 8) + 1)), temp_array);
			//adds the new member to the arry
			temp_array[(sizeof(members) / 8) - 1] = temp_member;
			//delets the old data form the old members
			delete members;
			//loads the new member arry data into the old member 
			*members = *temp_array;
			//delets temp member arry
			delete temp_array;
			//delets temp ember verible
			delete temp_member;

			 
			break;
		case 5:
			cout << "=========================================================" << endl;
			cout << "Please enter your ID of the member you wish to change: " << endl;
			cout << "=========================================================" << endl;
			cin >> ID;
			x = 0;
			for (int i = 0; ((sizeof(members) / 8)) > i; i++)
			{
				if (members[i]->verify(ID)) {
					temp_id = i;
					x++;
				}
			}
			temp_id = temp_id - 1;
			//this make sure that the id dose exist
			if (x != 0)
			{
				do
				{
					cout << "=========================================================" << endl;
					cout << "What details would you like to change?" << endl;
					cout << "1. Age" << "\n" << "2. First Name" << "\n" << "3. Last Name" << "\n" << "4. Date of Birth" << "\n" << "5. Exit" << endl;
					cout << "=========================================================" << endl;
					cin >> option_edit;

					switch (option_edit)
					{
					case 1:
						cout << "Please enter your age: " << endl;
						cin >> age;
						members[temp_id]->ChangeAge(age);
						break;

					case 2:
						cout << "Please enter your First Name: ";
						cin >> change;
						members[temp_id]->ChangeFName(change);
						break;

					case 3:
						cout << "Please enter your Last Name: ";
						cin >> change;
						members[temp_id]->ChangeLName(change);
						break;

					case 4:
						cout << "Please enter your Date of Birth: " << "\n";
						cin >> change;
						members[temp_id]->ChangeDOB(change);
						break;

					case 5:
						cout << "Changes have been saved!" << endl;
						cout << "Updated details: " << endl;
						cout << "Have a nice day!" << endl;
						cout << "=========================================================" << endl;
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
				cout << "=========================================================" << endl;
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			exit = 1;
			cout << "Have a nice day!" << endl;
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