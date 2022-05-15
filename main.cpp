#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include"BaseData.h"
#include"Member.h"
#include "Sales.h"

using namespace std;



void create(vector<BaseData> members)
{
    // file pointer
    fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("member_data.csv", ios::out | ios::app);
    
    for (int i = 0; i < members.size(); i++)
    {
        fout << members[i].getID() << ", "
            << members[i].getFName() << ", "
            << members[i].getSName() << ", "
            << members[i].getAge() << ", "
            << members[i].getDOB() << ", "
            << "\n";
    }
}

void read_record()
{

    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("member_data.csv", ios::in);

    // Get the roll number
    // of which the data is required
    int rollnum, roll2, count = 0;
    cout << "Enter the roll number "
        << "of the student to display details: ";
    cin >> rollnum;

    // Read the Data from the file
    // as String Vector
    vector<string> row;
    string line, word, temp;

    while (fin >> temp) {

        row.clear();

        // read an entire row and
        // store it in a string variable 'line'
        getline(fin, line);

        // used for breaking words
        stringstream s(line);

        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word)) {

            // add all the column data
            // of a row to a vector
            row.push_back(word);
        }

        // convert string to integer for comparision
        roll2 = stoi(row[0]);

        // Compare the roll number
        if (roll2 == rollnum) {

            // Print the found data
            count = 1;
            cout << row[0] << " : \n";
            cout <<  row[1] << "\n";
            cout << row[2] << "\n";
            cout <<  row[3] << "\n";
            cout <<  row[4] << "\n";
            cout <<  row[5] << "\n";
            break;
        }
    }
    if (count == 0)
        cout << "Record not found\n";
}
int main()
{
    BaseData member1(10, "John", "Jones", 23, "18/5/1995");
    BaseData member2(0, "bob", "Jones", 30, "13/3/1993");
    vector<BaseData> members = {member1, member2};
    members[1].Add_Sales("apple", 4.95, "4/3/2022");
    members[1].Add_Sales("blue", 4.95, "4/3/2022");
    create(members);
    read_record();
    cout << "done" << endl;
    return 0;
}