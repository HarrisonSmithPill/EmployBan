namespace std;
namespace fstream;
#using "AddData.h"

AddData::AddData :
fAge(0);
fFName("null");
fSName("null");
fDOB("null");
fID(000 0000);
OrderSelect(0);
OrderType(0);
{}

AddData :: ~AddData
{
  delete[]  fAge, fFName, fSName, fDOB, fID;
}

/////////////////////////////////////////////////

if OrderSelect == 0;
{
const int AddData::getAge() const
{
    return fAge;
}

const char AddData::getDOB() const;
{
    return fDOB;
}

const char AddData::getFName() const;
{
    return fFName;
}

const char AddData::getLName() const;
{
    return fLName;
}


const int AddData::getID() const;
{
    return fID;
}
}

/////////////////////////////////////////////////

if OrderSelect == 1;
{
const char AddData::getFName() const;
{
    return fFName;
}

const char AddData::getLName() const;
{
    return fLName;
}

const int AddData::getAge() const
{
    return fAge;
}

const char AddData::getDOB() const;
{
    return fDOB;
}

const int AddData::getID() const;
{
    return fID;
}
}

/////////////////////////////////////////////////

if OrderSelect == 2;
{
const int AddData::getID() const;
{
    return fID;
}

const char AddData::getFName() const;
{
    return fFName;
}

const char AddData::getLName() const;
{
    return fLName;
}

const int AddData::getAge() const
{
    return fAge;
}

const char AddData::getDOB() const;
{
    return fDOB;
}

}

/////////////////////////////////////////////////


const char AddData::insertProduct(const char fproductHistory[], char fProduct, int fsize);
{

    fProduct >> fproductHistory[fsize + 1];

}


const int AddData::updateAge(int fupdate) const
{
    fAge = fupdate;
}

const char AddData::updateFName(char fupdate) const;
{
    fFName = fupdate;
}

const char AddData::updateLName(char fupdate) const;
{
    fLName = fupdate;
}

const char AddData::updateDOB(char fupdate) const;
{
    fDOB = fupdate;
}

const int AddData::updateID(int fupdate) const;
{
    fID = fupdate;
}

