#include "zodiacFake.hpp"

ZodiacFake::ZodiacFake(std::string sign) : _sign(sign) {}

std::string ZodiacFake::GetString(const std::tm *) {
  return _sign;
}