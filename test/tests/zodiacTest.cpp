#include "catch.hpp"
#include "zodiac.hpp"

TEST_CASE( "Zodiac Signs", "[Zodiac]" ) 
{ 
  Zodiac zodiac;
  std::time_t now = time(0);
  std::tm * birth = localtime(&now);
  
  SECTION("Fire Dragon") {
    std::string expected = std::string("Fire Dragon");
    birth->tm_mon = 3 - 1;
    birth->tm_year = 1976 - 1900;
    std::string result = zodiac.GetString(birth);
    REQUIRE(result == expected);
  }

  SECTION("Earth Snake") {
    std::string expected = std::string("Earth Snake");
    birth->tm_mon = 10 - 1;
    birth->tm_year = 1989 - 1900;
    std::string result = zodiac.GetString(birth);
    REQUIRE(result == expected);
  }

  SECTION("Water Rooster") {
    std::string expected = std::string("Water Rooster");
    birth->tm_mon = 1 - 1;
    birth->tm_year = 1934 - 1900;
    std::string result = zodiac.GetString(birth);
    REQUIRE(result == expected);
  }
}