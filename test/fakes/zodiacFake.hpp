#ifndef __ZODIAC_FAKE_H__
#define __ZODIAC_FAKE_H__

#include "zodiac.hpp"

class ZodiacFake : IZodiac
{
  private:
    std::string _sign;
  public:
    ZodiacFake(std::string sign);
    std::string GetString(const std::tm * date);
};

#endif // __ZODIAC_FAKE_H__