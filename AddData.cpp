namespace std;
#using "AddData.h"

AddData :: AddData :
   fAge(0);
   fFName("null");
  fSName("null");
  fDOB("null");
  fID(0);
{}

AddData :: ~AddData
{
  delete[]  fAge, fFName, fSName, fDOB, fID;
}

  const int AddData :: getAge() const
  {
    return fAge;
  }
  
  const char AddData :: getFName() const;
  {
    return fFName;
  }
  
  const char AddData ::getLName() const;
  {
    return fLName;
  }
  
  const char AddData :: getDOB() const;
  {
    return fDOB;
  }
  
  const int AddData :: getID() const;
  {
    return fID;
  }
  
  const char AddData :: insertProduct(const char fproductHistory[]);
  {
  }
  

  
