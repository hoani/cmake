#ifndef __ZODIAC_H__
#define __ZODIAC_H__

#include <ctime>
#include <string>

class IZodiac
{
  public:
    virtual std::string GetString(const std::tm * date) = 0;
};

class Zodiac : IZodiac
{
  public:
    Zodiac();
    std::string GetString(const std::tm * date);
};

#endif // __ZODIAC_H__