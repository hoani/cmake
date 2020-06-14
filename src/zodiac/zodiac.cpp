#include "zodiac.hpp"

const std::string kAnimals[12] = {
  "Rat",
  "Ox",
  "Tiger",
  "Rabbit",
  "Dragon",
  "Snake",
  "Horse",
  "Goat",
  "Monkey",
  "Rooster",
  "Dog",
  "Pig"
};

const std::string kElements[5] = {
  "Metal",
  "Water",
  "Wood",
  "Fire",
  "Earth"
};

// Zodiac Impl

Zodiac::Zodiac() {}

std::string Zodiac::GetString(const std::tm * date) {
  int zodiac_cycle = date->tm_year;
  if (date->tm_mon == 0) {
    zodiac_cycle--;
  }
  
  int animal_index = zodiac_cycle % 12;
  int element_index = (zodiac_cycle/2) % 5;


  return kElements[element_index] + " " + kAnimals[animal_index];
}