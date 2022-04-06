#pragma once

#include <iostream>
#include <string>

class AddData
{
  private:
  
  int fAge;
  char fFName;
  char fSName;
  char fDOB;
  int fID;
  
  
  public:
  
  AddData(int fAge = 0, char fFName = "null", char fLName = "null", char fDOB = "null", int fID = 000000,);
  
  ~AddData(){}
  
  const int getAge() const;
  
  const char getFName() const;
  
  const char getLName() const;
  
  const char getDOB() const;
  
  const int getID() const;
  
  const char insertProduct(const char fproductHistory[]);
  
  const char printInfo() const;

}
