#pragma once
#include<iostream>
using namespace std;

class Member {
	private:
		int fID;
		string ffName;
		string flName;
		string fDOB;

	public:
		//Constructors
		Member(int x, string y, string z, string a) {
			this->fID = x;
			this->ffName = y;
			this->flName = z;
			this->fDOB = a;
		}

		void details() {
			cin >> fID;
			cin >> ffName;
			cin >> flName;
			cin >> fDOB;
		}

		//Display Function
		void display() {
			cout << "Member ID: " << fID << endl;
			cout << "First Name: " << ffName << endl;
			cout << "Last Name: " << flName << endl;
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


};