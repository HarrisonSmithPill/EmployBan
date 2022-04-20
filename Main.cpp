#include<iostream>
#include"Member.h"
#include"BaseData.h"
#include<string>
#include<fstream>

using namespace std;

int main() {
	int ID, option;
	string ans, change;

	Member* test = new Member(10, "John", "Jones", "18/5/1995");
	test->display();

	//Member* new1 = new Member(0, "null", "null", "null");
	//new1->display();

	do {
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

	return 0;
}
    
