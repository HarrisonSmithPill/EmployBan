#include <iostream>
#include <ctime>

#pragma warning(disable : 4996)

using namespace std;

int main() {
    //gets current time
    int current[3]; //empty array for storage of current date

    time_t t = time(0);   // get time now
    tm* now = localtime(&t);

    cout << "this is a test to print time" << endl;
    current[0] = (now->tm_year + 1900);
    current[1] = (now->tm_mon + 1);
    current[2] = now->tm_mday;
    cout << current[2] << "-" << current[1] << "-" << current[0] << endl;

    //User input for order timeframe
    int year, month, day;

    cout << "Please enter your desired time for order: " << endl;
    cout << "enter day" << endl;
    cin >> day;

    cout << "enter month" << endl;
    cin >> month;

    cout << "enter year" << endl;
    cin >> year;

    //sets required date in array
    int required[3] = { year,month,day };


    //check step for valid date
    //year check
    if (required[0] >= current[0]) {
        cout << "valid year" << endl;
    }
    else {
        cout << "invalid year" << endl;
    }
    if (required[0] > current[0]) { //if new year
    //days of the month check
        switch (current[1]) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout << "valid month" << endl;
            if (required[2] > 0 && required[2] <= 31) { //checks if day enterted is within month
                    cout << "valid day" << endl;
            }
            else {
                    cout << "invalid day" << endl;
            } 
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        {
            cout << "valid month" << endl;
            if (required[2] > 0 && required[2] <= 30) {
                cout << "valid day" << endl;
            }
            else {
                cout << "invalid day" << endl;
            }
        }
        break;
        case 2:
        {
            cout << "valid month" << endl;
            if (required[2] > 0 && required[2] < 28) {
                cout << "valid day" << endl;
            }
            else {
                cout << "invalid day" << endl;
            }
        }
        break;
        }//end of switch statement
    }

    if (required[0] == current[0]) { //if same year
        //days of the month check
        switch (current[1]) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if (required[1] == current[1]) { //checks if its the month
                cout << "valid month" << endl;
                if (required[2] >= current[2] && required[2] <= 31) { //checks if day enterted is within month
                    cout << "valid day" << endl;
                }
                else {
                    cout << "invalid day" << endl;
                }
            }
            else {
                cout << "invalid month" << endl;
            }
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        {
            if (required[1] == current[1]) {
                cout << "valid month" << endl;
                if (required[2] >= current[2] && required[2] <= 30) {
                    cout << "valid day" << endl;
                }
                else {
                    cout << "invalid day" << endl;
                }
            }
            else {
                cout << "invalid month" << endl;
            }
        }
        break;
        case 2:
        {
            if (required[1] == current[1]) {
                cout << "valid month" << endl;
                if (required[2] >= current[2] && required[2] < 28) {
                    cout << "valid day" << endl;
                }
                else {
                    cout << "invalid day" << endl;
                }
            }
            else {
                cout << "invalid month" << endl;
            }
        }
        break;
        }//end of switch statement
    }

    //prints required date
    cout << "Required date: " << endl;
    cout << required[2] << "-" << required[1] << "-" << required[0] << endl;


    int days;
    //test if order is late
    // If order is same day
    if (required[0] == current[0]) { //same year test
        if (required[1] == current[1]) {//same month
            if (required[2] == current[2]) {//same day
                cout << "the order is required today" << endl;
            }
        }
    }

    // If order is late
    if (required[0] == current[0]) { //same year test
        if (required[1] < current[1]) { //later month
            cout << "the order is late" << endl;
        }
        else if (required[1] == current[1] && required[2] < current[2]) { //same month + earlier day
            cout << "the order is late" << endl;
        }
    }


    return 0;
}