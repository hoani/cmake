#include "catch.hpp"
#include "zodiacFake.hpp"
#include "person.hpp"

TEST_CASE( "Person Tests", "[Person]" ) 
{ 
  SECTION("Steve the Saggitarian") {
    ZodiacFake zodiac("Saggitarius");
    Person person((IZodiac *) &zodiac, std::string("Steve"));
    person.SetBirthday(12, 3, 1956);
    std::string expected = std::string("Steve born in March 1956\nSaggitarius");
    std::string result = person.ToString();
    REQUIRE(result == expected);
  }

  SECTION("Sally the Lazy Rhino") {
    ZodiacFake zodiac("Lazy Rhino");
    Person person((IZodiac *) &zodiac, std::string("Sally"));
    person.SetBirthday(23, 7, 1971);
    std::string expected = std::string("Sally born in July 1971\nLazy Rhino");
    std::string result = person.ToString();
    REQUIRE(result == expected);
  }
}