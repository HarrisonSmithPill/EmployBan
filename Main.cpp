#include<iostream>
#include"BaseData.h"
#include <string>
using namespace std;
int main()
{
    BaseData BD;
    int intUpdate;
    string stringUpdate;

    /////////////////////////////////////////////
    cout << "Hello world" << endl;
    /////////////////////////////////////////////

    cout << "age ";
    cout << BD.getAge() << endl;


    cout << "update age:" << endl;
    cin >> intUpdate;
    BD.updateAge(intUpdate);
    cout << "new age ";
    cout << BD.getAge() << endl;

    /////////////////////////////////////////////
    cout << "ID ";
    cout << BD.getID() << endl;


    cout << "update ID:" << endl;
    cin >> intUpdate;
    BD.updateID(intUpdate);
    cout << "new ID ";
    cout << BD.getID() << endl;

    /////////////////////////////////////////////

    cout << "FIRST NAME ";
    cout << BD.getFName() << endl;

    cout << "update first name:" << endl;
    cin >> stringUpdate;
    BD.updateFName(stringUpdate);
    cout << "new frist name ";
    cout << BD.getFName() << endl;

    /////////////////////////////////////////////

    cout << "SURNAME NAME ";
    cout << BD.getSName() << endl;

    cout << "update surname name:" << endl;
    cin >> stringUpdate;
    BD.updateSName(stringUpdate);
    cout << "new surname name ";
    cout << BD.getSName() << endl;


    /////////////////////////////////////////////

    cout << "DOB ";
    cout << BD.getDOB() << endl;

    cout << "update DOB:" << endl;
    cin >> stringUpdate;
    BD.updateDOB(stringUpdate);
    cout << "new DOB ";
    cout << BD.getDOB() << endl;

    /////////////////////////////////////////////

    cout << "HList ";
    cin >> stringUpdate;
    BD.insertProduct(stringUpdate);
    cout << BD.getHList(1) << endl;

    cout << "2HList ";
    cin >> stringUpdate;
    BD.insertProduct(stringUpdate);
    cout << BD.getHList(2) << endl;
    cout << BD.getHList(1) << endl;
    return 0;
}
