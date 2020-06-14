#include "person.hpp"


Person::Person(IZodiac * zodiac, std::string name) : _birth(std::tm()), _name(name), _zodiac(zodiac) {
  std::time_t now = time(0);
  localtime_s(&_birth, &now);
}

Person::~Person() {
}

void Person::SetBirthday(int day, int month, int year) {
  _birth.tm_year = year - 1900;
  if (month > 0 && month <= 12) {
    _birth.tm_mon = month - 1;
  } 
  _birth.tm_mday = day;
}

std::string Person::ToString() {
  char buffer[80];
  std::strftime(buffer, sizeof(buffer)," born in %B %Y", &_birth);
  return _name + std::string(buffer) + "\n" + _zodiac->GetString(&_birth);
}