namespace std;
namespace fstream;
#using "AddData.h"

AddData :: AddData :
   fAge(0);
   fFName("null");
  fSName("null");
  fDOB("null");
  fID(000 0000);
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
  
  const char AddData :: insertProduct(const char fproductHistory[], char fProduct,int fsize);
  {

     fProduct >> fproductHistory[fsize+1];
     
  }


  const int AddData :: updateAge(int fupdate) const
  {
    fAge = fupdate;
  }
  
  const char AddData :: updateFName(char fupdate) const;
  {
     fFName = fupdate;
  }
  
  const char AddData ::updateLName(char fupdate) const;
  {
     fLName = fupdate;
  }
  
  const char AddData :: updateDOB(char fupdate) const;
  {
    fDOB = fupdate;
  }
  
  const int AddData :: updateID(int fupdate) const;
  {
     fID = fupdate;
  }
  

  
