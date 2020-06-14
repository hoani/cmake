#include <iostream>
#include <ctime>
#include "zodiac.hpp"
#include "person.hpp"

int main() {
  int year, month, day;
  std::string name;
  Zodiac zodiac;

  for(;;) {
    std::cout << "What is your name? ";
    std::cin >> name;
    Person person((IZodiac *) &zodiac, name);
    std::cout << "What is your birth year? ";
    std::cin >> year;
    std::cout << "What is your birth month (1 - 12)? ";
    std::cin >> month;
    day = 1; // doesn't matter...
    person.SetBirthday(day, month, year);
    std::cout << person.ToString() << std::endl;
  }
  return 0;
}