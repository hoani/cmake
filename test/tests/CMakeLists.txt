add_executable(Test 
  TestMain.cpp
  adderTest.cpp
  zodiacTest.cpp
  personTest.cpp
)

target_link_libraries(Test PRIVATE
  Catch
  Fakes
  Adder
  Zodiac
  Person
)

target_compile_definitions(Test
    PRIVATE _CRT_SECURE_NO_WARNINGS
)

