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
  
  AddData();
  
  ~AddData(){}
  
  const int getAge() const;
  
  const char getFName() const;
  
  const char getLName() const;
  
  const char getDOB() const;
  
  const int getID() const;
  
  const char insertProduct(const char fproductHistory[]);
  


}
