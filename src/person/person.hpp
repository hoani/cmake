#ifndef __PERSON_H__
#define __PERSON_H__

#include <ctime>
#include <string>
#include "zodiac.hpp"

class Person
{
private:
  std::tm * _birth;
  std::string _name;
  IZodiac * _zodiac;
public:
  Person(IZodiac * zodiac, std::string name);
  ~Person();
  void SetBirthday(int day, int month, int year);
  std::string ToString();
};

#endif //__PERSON_H__